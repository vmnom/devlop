#include <vmnomx.h>

int main(int argc, char *argv[]) {

	sqlite3 *db;

	int rc = sqlite3_open("/etc/db", &db);

	printf("end main");

	return EXIT_SUCCESS;
}
