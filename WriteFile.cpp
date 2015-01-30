#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name) //constructor
{
   output_file.open(file_name);
   closed = false;
}

void WriteFile::close() //close the file
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line) //write into the file
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
