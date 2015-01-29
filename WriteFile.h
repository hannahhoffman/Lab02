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

		void writeLine(String* line);
		void close();

};

#endif
