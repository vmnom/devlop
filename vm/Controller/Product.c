#include <vmnomx>

Router http(sqlite3 *db, Response res) {

	Response index(Request req)
	{
		return view(200, "products");
	}

	Router routes;

	{
		routes
		
		.add("/", index);
	}

	return routes;
}
