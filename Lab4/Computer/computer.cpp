//computer
//function definitions

//preprocessor
#include <string>
#include "headerComputer.h"

//constructor
Computer::Computer()
{


}
//overload constructor
Computer::Computer(string brand, string type, int benchmark)
{
newBrand = brand;
newType = type;
newBenchmark = benchmark;

setBrand(brand);
setType(type);
setBenchmark(benchmark);
}
