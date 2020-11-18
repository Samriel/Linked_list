#include "node.hpp"

int main()
{
    int c;
    ListOfNumbers *ln = new ListOfNumbers(0);
    for (int i = 1; i< 10; i++)
    {
        ln->Add(i);
    }
    ln->PrintList();
    ln = ln -> Remove(9);
    ln->PrintList();
    delete ln;
}