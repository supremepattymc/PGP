#include "pgp1.hpp"



int main(int argc, char* argv[])
{
    ifstream file;
    file.open(argv[1]);

    vector<int> digits;
    char c;

    while(file.get(c))
    {
        if(c != '\n' && c != ' ')
        {
            int i = convertToInt(c);
            digits.push_back(i);
        }
    }

    

    executeMenu(digits);
      
    
    file.close();
    return 0;
}

