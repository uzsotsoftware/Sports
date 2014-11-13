/* 
 * File:   main.cpp
 * Author: R135352A & R135264G
 *
 * Created on October 23, 2014, 9:00 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
class Basketball;
class Soccer;

class Athletes {
    string Name;
public:
    string fieldCourt;
    string coach;
    int dateOfTraining;
    int nextMatch;

    string getfieldCourt() {
        return fieldCourt;
    }

    string getcoach() {
        return coach;
    }

    int getdateOfTraining() {
        return dateOfTraining;
    }

    int getnextMatch() {
        return nextMatch;
    }


};

class Basketball {
public:

    Athletes setsportDet(Athletes athlete) {
        cout << "Field or court for practice ";
        cin >> athlete.fieldCourt;
        cout << "Coach in charge...";
        cin >> athlete.coach;
        cout << "Date of training...";
        cin >> athlete.dateOfTraining;
        cout << "Date of next match...";
        cin >> athlete.nextMatch;
        return athlete;
    }
};

class Soccer {
public:

    Athletes setsportDet(Athletes athlete) {
        cout << "Field or court for practice...";
        cin >> athlete.fieldCourt;
        cout << "Coach in charge...";
        cin >> athlete.coach;
        cout << "Date of training...";
        cin >> athlete.dateOfTraining;
        cout << "Date of next match..";
        cin >> athlete.nextMatch;
        return athlete;
    }
};

int main(int argc, char** argv) {
    Athletes athlete, *a;
    a = &athlete;

    Basketball basketball, *b;
    b = &basketball;


    athlete = basketball.setsportDet(athlete);
    cout << "\n<<<<<<<Basketball Details>>>>>>>" << endl;
    cout << "Field or court for practice... " << a->getfieldCourt() << endl;
    cout << "Coach in charge is..." << a->getcoach() << endl;
    cout << "Date of training is on... " << a->getdateOfTraining() << " of this month." << endl;
    cout << "Date of next match is on... " << a->getnextMatch() << " of this month.\n" << endl;

    Soccer soccer, *c;
    c = &soccer;
    athlete = soccer.setsportDet(athlete);
    cout << "\n<<<<<<<Soccer Details>>>>>>>" << endl;
    cout << "Field or court for practice... " << a->getfieldCourt() << endl;
    cout << "Coach in charge is..." << a->getcoach() << endl;
    cout << "Date of training is on... " << a->getdateOfTraining() << " of this month." << endl;
    cout << "Date of next match is on... " << a->getnextMatch() << " of this month." << endl;


    return 0;
}

