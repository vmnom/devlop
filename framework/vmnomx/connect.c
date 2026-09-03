#include <vmnomx.h>

void connect(char *database) {

	printf("xyz");

	exit(0);

	sqlite3 *db;

	if (sqlite3_open(database, &db) != SQLITE_OK) {

		fprintf(stderr, "Database error: %s\n", sqlite3_errmsg(db));

		exit(EXIT_FAILURE);
    	}

	printf("dbready\n");
}


