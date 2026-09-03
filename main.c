#include <vmnomx.h>

int __init()
{
	connect("/dev/db");

	return 0;
}

int main(int argc, char *argv[])
{
	__init();

	printf("xyz2");

	return EXIT_SUCCESS;
}
