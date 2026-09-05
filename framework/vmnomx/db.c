#include <vmnomx.h>

void open(sqlite3 *db, char* file) {

	sqlite3 *x;

	sqlite3_open(file, &x);

	printf("open database ready");
}
