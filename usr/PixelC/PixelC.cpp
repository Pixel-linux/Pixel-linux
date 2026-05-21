#include "PixelC.h"

using namespace std;

// Code by NixxLTE -w-

string mode;

int error(bool fatal, int code) {
	// printf("AN ERROR HAS OCURRED. error code:")
	std::cout << "AN ERROR HAS OCURRED. error code: " << code << "this error is ";
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

		if (arg == "help" || arg == "h") {
			printf("Avaiable commands:\n");
			printf("update: Updates everything on Pixel/Linux");
			
		} else if (arg == "update") {
			mode = "update";
			system("chmod +x update.sh && ./update.sh");

		} 
		else {
			printf("INVALID COMMAND. Maybe try help?");
			return 1;
		}
	}

return 0; }
