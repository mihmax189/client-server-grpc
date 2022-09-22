#include "db.h"

static string resultSqlCommand;
static int callback(void *udp, int num, char** vals, char** names) {
	for (int i = 0; i < num; i++) {
		resultSqlCommand += string(names[i]) + string(" = ")
			+ string(vals[i] ? vals[i] : "NULL") + string("\n");
	}
	resultSqlCommand += "\n";

	return 0;
}

Database::Database(const string & nameDb) : nameDb(nameDb) {}

Database::~Database() {
	sqlite3_close(db);
}

int Database::open() {
	return sqlite3_open(nameDb.c_str(), &db);
}

string Database::msg() const {
	return string(sqlite3_errmsg(db));
}

int Database::execSqlCommand(const string & command, string & result) {
	char* errorMsg;
	res = sqlite3_exec(db, command.c_str(), callback, 0, &errorMsg);

	if (res != SQLITE_OK) {
		std::cerr << "SQL error: " << errorMsg << std::endl;
		sqlite3_free(errorMsg);

		return -1;
	}

	if (resultSqlCommand != "") {
		result = resultSqlCommand;
		resultSqlCommand = "";
	}

	return 0;
}

