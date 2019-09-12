#include <iostream>
#include "ClubMember.h"
using namespace std;

int main() {
    string str_temp;
    char char_temp;
    int int_memberAmounts;
    cout << "How Many Club Members:";
    cin >> int_memberAmounts;
    ClubMember DACSCMembers[int_memberAmounts];

    for (int i = 0; i < int_memberAmounts; ++i) {
        cout << "Plz Now Enter The " << i+1 <<  " Member's Name:";
        cin >> str_temp;
        DACSCMembers[i].void_assignName(str_temp);
        cout << "Plz Now Enter The " << i+1 << " Member's Nickname:";
        cin >> str_temp;
        DACSCMembers[i].void_assignNickname(str_temp);
        cout << "Plz Now Enter The " << i+1 <<  " Member's Gender \n( F For Female, M for Male ) :";
        cin >> char_temp;
        DACSCMembers[i].void_assignGender(char_temp != 'F');
        cout << "Plz Now Enter The " << i+1 << " Member's Class :";
        cin >> str_temp;
        DACSCMembers[i].void_assignClass(str_temp);
        cout << "End of the" << i+1 << "Member's Data \n\n";
        cout << int_memberAmounts - i - 1 << "Member(s) Left\n\n";
    }// assign data

    int int_function = 0;

    while (true) {
        cout << "Plz Enter The Number Of The ClubMember UR Looking For Or Enter -1 To Exit This Program:";
        cin >> int_function;
        if (int_function <0)
            return 0;
        cout << "\n\nName: " << DACSCMembers[int_function].str_returnName() << endl;
        cout << "Nickname: " << DACSCMembers[int_function].str_returnNickname() << endl;
        cout<< "Gender:" ;
        DACSCMembers[int_function].str_returnGender() ? cout << "Female " : cout << "Male" << endl;
        cout << "Class: " << DACSCMembers[int_function].str_returnClass() << endl <<endl;
    }



    return 0;
}