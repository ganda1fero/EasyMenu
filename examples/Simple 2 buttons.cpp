#include "EasyMenu.h"

int main() {
	EasyMenu menu;

	menu.add.button("first button");
	menu.add.button("second button");

	switch (menu.run())
	{
	case 0:
		// clicked first button
		break;
	case 1:
		// clicked second button
		break;
	}

	return 0;
}