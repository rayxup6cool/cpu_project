#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    std::ifstream DRAM_inst_File("DRAM_inst.dat");
    if (!DRAM_inst_File)
    {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }
    string line;
    while (getline(DRAM_inst_File, line))
    {
        cout << line << endl;
    }
    DRAM_inst_File.close();
    return 0;
}