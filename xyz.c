#include <vmnomx.h>

int main(int argc, char *argv[]) {

	{

		ROUTE users;

		json_open("db/users", users);

	}

	{
		ROUTE conversation;

		json_open("db/conversation", conversation);
	}

	return EXIT_SUCCESS;
}
