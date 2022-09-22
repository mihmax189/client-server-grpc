#ifndef _DBLOGIC_H_
#define _DBLOGIC_H_

#include <iostream>
#include <string>

using std::cerr;
using std::endl;
using std::string;

#include "db.h"

class DbLogic {
public:
	DbLogic(const string &);
	~DbLogic();
	DbLogic() = delete;
	DbLogic(const DbLogic&) = delete;
	DbLogic & operator=(const DbLogic&) = delete;

	bool deleteWorker(int id);
	bool showWorkers(string & rows);
	bool showPost(int id, string & row);
	bool showHead(int id, string & row);
	bool insertWorker(const string & f_name,
		const string & s_name, const string & post, const string &head_name);
	bool updateHead(int id, const string & head_name);
	bool updatePost(int id, const string & value);

private:
	bool createDb();
	bool createTable();

	Database *db;
	string nameDb;
};
#endif
