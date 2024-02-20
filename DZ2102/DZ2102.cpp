﻿#include <iostream>
#include <vector>

using namespace std;

class MultiplicationTable 
{
    vector<vector<int>> table;
public:

    MultiplicationTable() 
    {
        table.resize(10, vector<int>(10, 0));
        fillMultiplicationTable();
    }

    void fillMultiplicationTable() 
    {
        for (int i = 0; i < table.size(); ++i) 
        {
            for (int j = 0; j < table[i].size(); ++j)
            {
                table[i][j] = (i + 1) * (j + 1);
            }
        }
    }

    void displayTable(ostream& os) const 
    {
        for (const auto& row : table) 
        {
            for (int value : row) 
            {
                os << value << "\t";
            }
            os << endl;
        }
    }
};

int main() 
{
    MultiplicationTable multiplicationTable;
    multiplicationTable.displayTable(std::cout);

    return 0;
}