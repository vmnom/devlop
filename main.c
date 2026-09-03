#include <vmnomx.h>

int main(int argc, char *argv[]) {

	sqlite3 *db;

	{
		open(db, "/etc/db");
	}

	printf("end main");

	return EXIT_SUCCESS;
}
