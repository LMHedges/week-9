#include <iostream>
#include <vector>
#include "Animal.h"

using namespace std;

vector<Animal*> container;

void add() {
    string input;

    cout << "What animal Sheep or Cow? (S/C)" << endl;
    cin >> input;
    if (input == "S") {
        container.push_back(new Sheep());
    }
    else if (input == "C") {
        cout << "Is the cow a Frisian? (Y/N)" << endl;
        cin >> input;
        if (input == "Y") {
            container.push_back(new Frisian);
        }
        else if (input == "N") {
            container.push_back(new Cow);
        }
        else {
            cout << "Invalid input" << endl;
        }
    }
    else {
        cout << "Invalid input" << endl;
    }
}
int main()
{
    bool valid = true;
    string input;

    while (valid == true) {
        cout << "Would you like to add an animal? (Y/N)" << endl;
        cin >> input;
        if (input == "Y") {
            add();
        }
        else if (input == "N") {
            valid = false;
        }
        else {
            cout << "Inavlid input" << endl;
        }
    }

    for (int a = 0; a < container.size(); a++)
    {
        container[a]->speak();
    }
}