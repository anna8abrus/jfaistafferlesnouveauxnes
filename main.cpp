#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>


int main() {

    std::ofstream image;
    image.open("image.ppm");

    srand(time(0));

    if (image.is_open()) {

        image << "P3" << std::endl;
        image << "250 250" << std::endl;
        image << "255" << std::endl; 
        

        for (int y = 0; y < 250; y++) {

            for (int x = 0; x < 250; x++) {

                image << rand() % 255 << " " << rand() % 255 << " " << rand() % 255 << std::endl;

            }
        }
    }

    image.close();

    return 0;
}