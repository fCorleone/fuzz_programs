# include "csv.h"
# include <string>
# include <fstream>
# include <iostream>
int main(int argc,char *argv[]){
  io::CSVReader<3> in(argv[1]);
  in.read_header(io::ignore_extra_column, "vendor", "size", "speed");
  std::string vendor; int size; double speed;
  while(in.read_row(vendor, size, speed)){
    // do stuff with the data
  }
}
