#include <vmnomx>

struct Product {

	char* id;
	char* img;
	char* title;
	char* description;

	QUANTITY instock;

	CONVERSATION reviews;

	Product related[] ;
}

void map(void args) {
}
