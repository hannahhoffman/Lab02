//CSC 2111 Lab02
//repository link: https://github.com/hannahhoffman/Lab02

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

		String* readLine();//read the line in the file
		bool eof();
		void close(); //close the file

};


#endif
