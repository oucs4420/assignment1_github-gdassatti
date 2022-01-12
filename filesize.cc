//******************************************//
//  Gavin Dassatti (gd221717)               //
//  CS 4420 HW0                             //
//  1 - 12 - 2021                           //
//                                          //
//  Program that outputs the number of      //
//  lines in a file.                        //
//******************************************//
#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 0; arg < argc; ++arg){

        if(arg == 0){
            // outputting the first argument which is the name of the program
            cout << "program: " << argv[arg] << '\n';
        } else {
            string line;
            int count = 0;
            // creating a file stream object
            ifstream stream(argv[arg]);

            if(stream.is_open()){   // checking to make sure we opened the file
                
                while(getline(stream, line)){   // loop through number of lines
                    count++;
                }
                // outputting the file and number of lines
                cout << " " << argv[arg] << ": " << count << '\n';

            } else {
                // special case if we are unable to open the file
                cout << " " << argv[arg] << ": " << -1 << '\n';

            }

        }

    }

    exit(0); // this means that the program executed correctly!
}
