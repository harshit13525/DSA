#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> Ids;
    vector<string> Names;

    int no;
    cout << "Enter number of students: ";
    cin >> no;

    for (int i = 0; i < no; i++) {
        int id;
        string name;

        cout << "\nEnter ID for student " << i + 1 << " : ";
        cin >> id;
        cout << "Enter Name for student " << i + 1 << " : ";
        cin >> name;

        Ids.push_back(id);
        Names.push_back(name);
    }

    cout << "\n\t  Student List  " << endl;
    cout << "-------------------------------" << endl;

    for (int i = 0; i < Ids.size(); i++) {
        cout << "\tID : " << Ids[i]
             << "\t Name : " << Names[i] << endl;
    }

    return 0;
}