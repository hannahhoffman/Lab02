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
		
		String* readLine();
		bool eof();
		void close();

};


#endif
