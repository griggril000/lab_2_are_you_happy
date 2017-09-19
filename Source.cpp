/* if happy and know it clap hands */

#include<iostream>
#include <string>
using namespace std;
int main()
{
    bool ishappy;
    string userInput;
    cout << "Are you happy? Yes or No?" << endl;
    cin >> userInput;
    if(userInput == "yes")
    {
        ishappy == true;
    }
    else
    {
        cout << "Well then become happy!";
    }
	return 0;
}