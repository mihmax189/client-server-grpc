#ifndef _DB_H_
#define _DB_H_

#include <iostream>
#include <string>
#include <sqlite3.h>

using std::string;

class Database {
public:
	Database(const string &);
	~Database();
	Database(const Database &) = delete;
	Database & operator=(const Database &) = delete;

	int open();
	string msg() const;

	int execSqlCommand(const string &, string &);
private:
	sqlite3 *db;
	char *errMsg;
	int res;

	string nameDb;
};

#endif
