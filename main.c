#include <vmnomx.h>

database db = {
	.users    = users,
	.products = products,
}

router routes = {
	.add = add,
}

int main(int argc, char *argv[]) {

	n
		->plugins(WASM)

		->apply(api, db);

	return EXIT_SUCCESS;
}
