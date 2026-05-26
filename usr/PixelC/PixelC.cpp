#include "PixelC.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Code by NixxLTE -w-

string mode;

std::string lowercase(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;
}

int error(bool fatal, int code) { // called "catch()" in old versions
	std::cout << "AN ERROR HAS OCURRED. error code: " << code << "\n this error is ";
	if (fatal) {
		printf("FATAL.\n");
		return 1;
	} else {
		printf("NOT FATAL.\n");
		return 0;
	}
}

int main(int argc, char* argv[]) { // im learning C++ and the new command will use it :D
	for (int i = 1; i < argc; i++) {
		std::string arg = argv[i];

		if (lowercase(arg) == "help" || lowercase(arg) == "h") {
			printf("Avaiable commands:\n");
			printf("update: Updates everything on Pixel/Linux\n");
			printf("start: Starts an internal program\n");
			
		} else if (lowercase(arg) == "update") {
			mode = "update";
			system("sudo apt install git -y");
			system("chmod +x update.sh && ./update.sh");

		} else if (lowercase(arg) == "rollback") {
			// printf("This option intentionally doesnt exist yet.\n");
			system("echo This option intentionally doesnt exist yet.");

		} else if (lowercase(arg) == "start") {
			string temp1 = argv[i + 1];
			if (lowercase(temp1) == "sdk") {
				printf("SDK terminal doesnt exist yet\n");
			}
		} else if (lowercase(arg) == "fix") {
			mode = "fix";
			system("chmod +x fix.sh && ./fix.sh");

		}
		else {
			printf("INVALID COMMAND. Maybe try help?\n");
			return 1;
		}
	}

return 0; }
