//CSC 2111 Lab02
//repository link: https://github.com/hannahhoffman/Lab02


//! Class to read a file
/*!
 * The ReadFile class accepts a character through the constructor.
 * The constructor opens a file with the given name. 
 */

#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile 
{
	private: //change to private so the users can't access it
		ifstream input_file;
		bool _eof;
		bool closed;
	public: //put the functions in the public section
		ReadFile (const char* file_name); //constructor
		
		//a destructor isn't needed because the pointers are deleted in main
		String* readLine(); //reads the line in the file; returns str
		bool eof(); //returns eof
		void close(); //closes the file

};


#endif