#include "dblogic.h"

DbLogic::DbLogic(const string & name) {
    db = new Database(name);
    if (!createDb())
      cerr << "Database \'" << name << "\' don't creat!" << endl;
    if (!createTable())
      cerr << "Table don't creat!" << endl;
}

DbLogic::~DbLogic() { delete db; }

bool DbLogic::createDb() {
  if (db->open()) {
    cerr << "Can't open the database " << nameDb << ": " << db->msg() << endl;
    return false;
  }

  std::cout << "database created!" << endl;
  return true;
}

bool DbLogic::createTable() {
  string create_table = "CREATE TABLE WORKERS("\
	"id        INTEGER PRIMARY KEY AUTOINCREMENT,"\
	"f_name    TEXT    NOT NULL,"\
	"s_name    TEXT	   NOT NULL,"\
	"post      TEXT    NOT NULL,"\
	"head_name TEXT    NOT NULL);";

  string none = "none";
  if (db->execSqlCommand(create_table, none) < 0)
    return false;

  return true;
}

bool DbLogic::showWorkers(string & rows) {
  string select = "SELECT * FROM WORKERS";

  if (db->execSqlCommand(select, rows) < 0)
    return false;

  return true;
}

bool DbLogic::insertWorker(const string &f_name,
                           const string &s_name,
                           const string &post,
                           const string &head_name) {

  string insert = "INSERT INTO WORKERS (id, f_name, s_name, post, head_name) VALUES (NULL, "
    + string("'" + f_name + "', '" + s_name + "', '"
    + post + "', '" + head_name + "')");

  string none = "none";
  if (db->execSqlCommand(insert, none) < 0)
    return false;

  return true;
}

bool DbLogic::deleteWorker(int id) {
  string del = string("DELETE from WORKERS where id=") + std::to_string(id) + string(";");

  string none = "none";
  if (db->execSqlCommand(del, none) < 0)
    return false;

  return true;
}

bool DbLogic::updateHead(int id, const string &value) {
  string update = "UPDATE WORKERS set head_name = '" + value +
  "' where id = " + std::to_string(id) + string(";");

  string none = "none";
  if (db->execSqlCommand(update, none) < 0)
    return false;

  return true;
}

bool DbLogic::updatePost(int id, const string & value) {
  string update = "UPDATE WORKERS set post = '" + value +
  "' where id = " + std::to_string(id) + string(";");

  string none = "none";
  if (db->execSqlCommand(update, none) < 0)
    return false;

  return true;
}

bool DbLogic::showPost(int id, string & row) {
  string select = "SELECT post from WORKERS where id = " + std::to_string(id);

  if (db->execSqlCommand(select, row) < 0)
    return false;

  return true;
}

bool DbLogic::showHead(int id, string & row) {
  string select = "SELECT head_name from WORKERS where id = " + std::to_string(id);

  if (db->execSqlCommand(select, row) < 0)
    return false;

  return true;
}
