//! Class to write into the file
/*!
 * The WriteFile class accepts a character through the constructor.
 * The constructor opens a file with the given name. 
 */


#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
	private: //change to private so the users can't access it
	  ofstream output_file;
	  bool closed;
	public: //put the functions in public 
		WriteFile (const char* file_name); //constructor 
		//a destructor isn't needed because the pointers are deleted in main

		void writeLine(String* line); //you have to pass the line you want to write
		void close(); //close the file

};

#endif
