#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> cities = {"Kyiv", "Kharkiv", "Vinnytsia", "Sumy", "Yevpatoria", "Yalta"};

    bool continueGame = true;

    while (continueGame) {
        string city;
        cout << "Enter city:" << endl;
        cin >> city;

        char inputLastChar = city.back();

        continueGame = false;
        for(auto currCity = cities.begin(); currCity != cities.end(); ++currCity) {
            char fChar = tolower((*currCity).at(0));

            if (fChar == inputLastChar) {
                cout << "My answer is: " << *currCity << endl;
                cities.erase(currCity);
                continueGame = true;
                break;
            }
        }
    }

    cout << "Oh no! I'm defeated!" << endl;
    return 0;
}
