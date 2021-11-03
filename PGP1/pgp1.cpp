#include "pgp1.hpp"

void option1(vector<int> digits)
{
    for(int i = 0; i < digits.size(); ++i)
    {
        if(i % 50 == 0)  cout << " :" << i << "\n" << digits.at(i);
        else if(i % 10 == 0) cout << " " << digits.at(i);
        else cout << digits.at(i);
    }
    cout << "\nDisplaying " << digits.size() << " digits." << endl;
}

void option2(vector<int> digits)
{
    cout << "Memorizing from beginning. Type -1 to exit." << endl;
    for(int i = 0; i < digits.size(); ++i)
    {
        int input = -14;
        while(input != digits.at(i))
        {
            if(i == 0) cout << "Digit #1: ";
            cin >> input;
            if(input == digits.at(i)) cout << input << " is correct. Digit #" << i+2 << ": ";
            else if(input == -1) return;
            else
            {
                input = -14;
                cout << "Incorrect. Try again! Digit #" << i+1 << ": ";
            }
        }
    }
}

void option3(vector<int> digits)
{
    cout << "Enter sequence of 50 digits: ";
    int num;
    cin >> num;

    cout << endl << num << " : " << endl;
    for(int i = num; i < num + 50; ++i)
    {
        if(i % 10 == 0 && i != num) cout << " " << digits.at(i);
        else cout << digits.at(i);
    }
    cout << endl << endl;
}

void option4(vector<int> digits)
{
    cout << "Enter sequence of 100 digits: ";
    int num;
    cin >> num;

    cout << endl << num << " : " << endl;
    for(int i = num; i < num + 100; ++i)
    {
        if(i % 50 == 0 && i != num)  cout << "\n" << digits.at(i);
        else if(i % 10 == 0 && i != num) cout << " " << digits.at(i);
        else cout << digits.at(i);
    }
    cout << endl << endl;
}

void option5(vector<int> digits)
{
    cout << "Enter starting point: ";
    int num;
    cin >> num;
    cout << "Memorizing 50 from digit placement " << num << ". Type -1 to exit." << endl;
    for(int i = num; i < num + 50; ++i)
    {
        int input = -14;
        while(input != digits.at(i))
        {
            if(i == 0) cout << "Digit #1: ";
            cin >> input;
            if(input == digits.at(i)) cout << input << " is correct. Digit #" << i+2 << ": ";
            else if(input == -1) return;
            else
            {
                input = -14;
                cout << "Incorrect. Try again! Digit #" << i+1 << ": ";
            }
        }
    }
}

void option6(vector<int> digits)
{
    cout << "Enter starting point: ";
    int num;
    cin >> num;
    cout << "Memorizing 100 from digit placement " << num << ". Type -1 to exit." << endl;
    for(int i = num; i < num + 100; ++i)
    {
        int input = -14;
        while(input != digits.at(i))
        {
            if(i == 0) cout << "Digit #1: ";
            cin >> input;
            if(input == digits.at(i)) cout << input << " is correct. Digit #" << i+2 << ": ";
            else if(input == -1) return;
            else
            {
                input = -14;
                cout << "Incorrect. Try again! Digit #" << i+1 << ": ";
            }
        }
    }
}

void option7(vector<int> digits)
{
    cout << "Enter starting point: ";
    int num;
    cin >> num;
    cout << "Memorizing 500 from digit placement " << num << ". Type -1 to exit." << endl;
    for(int i = num; i < num + 500; ++i)
    {
        int input = -14;
        while(input != digits.at(i))
        {
            if(i == 0) cout << "Digit #1: ";
            cin >> input;
            if(input == digits.at(i)) cout << input << " is correct. Digit #" << i+2 << ": ";
            else if(input == -1) return;
            else
            {
                input = -14;
                cout << "Incorrect. Try again! Digit #" << i+1 << ": ";
            }
        }
    }
}

void executeMenu(vector<int> digits)
{
    int option = 0;

    while(option != -1)
    {
        cout << "1. Display all digits." << endl;
        cout << "2. Memorize from beginning." << endl;
        cout << "3. Display 50 from point." << endl;
        cout << "4. Display 100 from point." << endl;
        cout << "5. Memorize 50 from placement." << endl;
        cout << "6. Memorize 100 from placement." << endl;
        cout << "7. Memorize 500 from placement." << endl;
        cout << "-1. Quit." << endl;
        cin >> option;

        if(option == 1) option1(digits);
        if(option == 2) option2(digits);
        if(option == 3) option3(digits);
        if(option == 4) option4(digits);
        if(option == 5) option5(digits);
        if(option == 6) option6(digits);
        if(option == 7) option7(digits);
        else
        {
            cout << "ERROR: Invalid option." << endl;
        }
    }
    
}

int convertToInt(char c)
{
    string str = " ";
    str[0] = c;
    int num = stoi(str);
    return num;
}