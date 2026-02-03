#include <iostream>
#include "EasyMenu.h"

int main() {
	EasyMenu menu;

	menu.style.info.add("are you ready?");
	menu.add.button("yes").color(GREEN_COLOR);
	menu.add.button("no").color(RED_COLOR);

	std::cout << menu.run();	//show pressed button index
}