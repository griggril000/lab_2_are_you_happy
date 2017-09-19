#include<iostream>
#include <string>
using namespace std;
int main()
{
    bool ishappy;
    bool knowsit;
    string userInput;
    cout << "Are you happy? Yes or No?" << endl;
    cin >> userInput;
    if(userInput == "yes")
    {
        ishappy == true;
        cout << "Good." << endl;
    }
    else
    {
        cout << "Well then become happy!";
    }
    cout << "Do you know it?" << endl;
    cin >> userInput;
    if(userInput == "yes")
    {
        knowsit == true;
        cout << "Then clap your hands." << endl;
    }
    else
    {
        cout << "Well then learn you're happy!";
    }
	return 0;
}