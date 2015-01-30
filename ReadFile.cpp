#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name) //constructor
{
   input_file.open(file_name);
   closed = false;
   _eof = false;
}


bool ReadFile::eof()
{
   return _eof;
}

void ReadFile::close() //close the file
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine() //read the line in the file
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
