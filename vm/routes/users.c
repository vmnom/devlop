#include <vmnomx>

void map(Controller controllers[], Activity activities[]) {

	controllers["User"] = {
		.activities = activities["users"]
	};

}
