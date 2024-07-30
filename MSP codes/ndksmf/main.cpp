//Author: Misan Parajuli
//Purpose: To create a program that reads students' grades and process them

/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct data {
    string name;
    string netid;
    double msp1, msp2, msp3, msp4, labcourse;
    double midterm, finale, quiz1, quiz2, quiz3, quiz4;
};

void process(data student);

int main() {
    int no_of_students;

    cout << "Enter Number of Students: ";
    cin >> no_of_students;

    vector<data> students(no_of_students);

    for (int i = 0; i < no_of_students; i++) {
        cout << "Enter student " << i + 1 << "'s name: ";
        cin >> students[i].name;
        cout << "Enter student " << i + 1 << "'s netid: ";
        cin >> students[i].netid;

        cout << "Score in MSP 1: ";
        cin >> students[i].msp1;
        cout << "Score in MSP 2: ";
        cin >> students[i].msp2;
        cout << "Score in MSP 3: ";
        cin >> students[i].msp3;
        cout << "Score in MSP 4: ";
        cin >> students[i].msp4;
        cout << "Score in Lab course: ";
        cin >> students[i].labcourse;

        cout << "Score in midterm: ";
        cin >> students[i].midterm;
        cout << "Score in final: ";
        cin >> students[i].finale;
        cout << "Score in Quiz 1: ";
        cin >> students[i].quiz1;
        cout << "Score in Quiz 2: ";
        cin >> students[i].quiz2;
        cout << "Score in Quiz 3: ";
        cin >> students[i].quiz3;
        cout << "Score in Quiz 4: ";
        cin >> students[i].quiz4;
    }

    for (int i = 0; i < no_of_students; i++) {
        cout << "The overall grade of " << students[i].name << " is ";
        process(students[i]);
    }

    return 0;
}

void process(data student) {
    double msp_sum = student.msp1 + student.msp2 + student.msp3 + student.msp4;
    double quiz_sum = student.quiz1 + student.quiz2 + student.quiz3 + student.quiz4;

    double lowest_msp = min({student.msp1, student.msp2, student.msp3, student.msp4});
    double lowest_quiz = min({student.quiz1, student.quiz2, student.quiz3, student.quiz4});

    msp_sum -= lowest_msp;
    quiz_sum -= lowest_quiz;

    double score;

     msp_sum = student.msp1 + student.msp2 + student.msp3 + student.msp4;
     quiz_sum = student.quiz1 + student.quiz2 + student.quiz3 + student.quiz4;

     lowest_msp = min({student.msp1, student.msp2, student.msp3, student.msp4});
     lowest_quiz = min({student.quiz1, student.quiz2, student.quiz3, student.quiz4});

    msp_sum -= lowest_msp;
    quiz_sum -= lowest_quiz;

     score;

    if (msp_sum >= quiz_sum) {
        score = (msp_sum * 60) / 400 + (quiz_sum * 40) / 40;
    } else {
        score = (quiz_sum * 60) / 400 + (msp_sum * 40) / 40;
    }

    if (score >= 90) {
        cout << "A" << endl;
    } else if (score >= 80) {
        cout << "B" << endl;
    } else if (score >= 70) {
        cout << "C" << endl;
    } else if (score >= 60) {
        cout << "D" << endl;
    } else if (score >= 50) {
        cout << "E" << endl;
    } else {
        cout << "F" << endl;
    }
}
*/




//Author: Misan Parajuli
//Purpose: To create a program that reads students' grades and process them


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct data {
    string name;
    string netid;
    double msp1, msp2, msp3, msp4, labcourse;
    double midterm, finale, quiz1, quiz2, quiz3, quiz4;
    double bonus1, bonus2, bonus3, bonus4, bonus5;
};

void process(data student);

int main() {
    int no_of_students;

    cout << "Enter Number of Students: ";
    cin >> no_of_students;

    data students [no_of_students];

    for (int i = 0; i < no_of_students; i++) {
        cout << "Enter student " << i + 1 << "'s name: ";
        cin >> students[i].name;
        cout << "Enter student " << i + 1 << "'s netid: ";
        cin >> students[i].netid;

        cout << "Score in MSP 1: ";
        cin >> students[i].msp1;
        cout << "Score in MSP 2: ";
        cin >> students[i].msp2;
        cout << "Score in MSP 3: ";
        cin >> students[i].msp3;
        cout << "Score in MSP 4: ";
        cin >> students[i].msp4;
        cout << "Score in Lab course: ";
        cin >> students[i].labcourse;

        cout << "Score in midterm: ";
        cin >> students[i].midterm;
        cout << "Score in final: ";
        cin >> students[i].finale;
        cout << "Score in Quiz 1: ";
        cin >> students[i].quiz1;
        cout << "Score in Quiz 2: ";
        cin >> students[i].quiz2;
        cout << "Score in Quiz 3: ";
        cin >> students[i].quiz3;
        cout << "Score in Quiz 4: ";
        cin >> students[i].quiz4;

        cout << "intro Survey: ";
        cin >> students[i].bonus1;
        cout << "Algorithm design basics assignment: ";
        cin >> students[i].bonus2;
        cout << "Github Account Creation and Population: ";
        cin >> students[i].bonus3;
        cout << "Srtuct Problem Set: ";
        cin >> students[i].bonus4;
        cout << "PAs/CAs: ";
        cin >> students[i].bonus5;


    }

    for (int i = 0; i < no_of_students; i++) {
        cout << "The overall grade of " << students[i].name << " is ";
        process(students[i]);
    }

    return 0;
}

void process(data student) {

        double msp_sum;
        double lowest_msp = std::numeric_limits<double>::max();
        double quiz_sum;
        double lowest_quiz = std::numeric_limits<double>::max();
        double score;


            msp_sum = student.msp1 + student.msp2 + student.msp3 + student.msp4+ student.bonus1+ student.bonus2+ student.bonus3+ student.bonus4+ student.bonus5+ student.labcourse;
            quiz_sum= student.quiz1 + student.quiz2 + student.quiz3 + student.quiz4 + student.midterm + student.finale;

            if (student.msp1 <= student.msp2 && student.msp1 <= student.msp3 && student.msp1 <= student.msp4){
                lowest_msp= student.msp1;
            }

            else if (student.msp2 <= student.msp1 && student.msp2 <= student.msp3 && student.msp2 <= student.msp4){
                lowest_msp= student.msp2;
            }

             else if (student.msp3 <= student.msp1 && student.msp3 <= student.msp2 && student.msp3 <= student.msp4){
                lowest_msp= student.msp3;
            }

             else if (student.msp4 <= student.msp1 && student.msp4 <= student.msp2 && student.msp4 <= student.msp3){
                lowest_msp= student.msp4;
            }


            msp_sum = msp_sum - lowest_msp;


            if (student.quiz1 <= student.quiz2 && student.quiz1 <= student.quiz3 && student.quiz1 <= student.quiz4){
                lowest_quiz= student.quiz1;
            }

            else if (student.quiz2 <= student.quiz1 && student.quiz2 <= student.quiz3 && student.quiz2 <= student.quiz4){
                lowest_quiz= student.quiz2;
            }

            else if (student.quiz3 <= student.quiz1 && student.quiz3 <= student.quiz2 && student.quiz3 <= student.quiz4){
                lowest_quiz= student.quiz3;
            }

            else if (student.quiz4 <= student.quiz1 && student.quiz4 <= student.quiz2 && student.quiz4 <= student.quiz3){
                lowest_quiz= student.quiz4;
            }

            quiz_sum = quiz_sum - lowest_quiz;


        if (msp_sum >= quiz_sum) {
        score = ((msp_sum / 68) * 100 + (quiz_sum / 40) * 100) / 2;
        } else if (quiz_sum >= msp_sum) {
        score = ((quiz_sum / 40) * 100 + (msp_sum / 68) * 100) / 2;
        }


        if (score >= 90) {
        cout << "A" << endl;
    } else if (score >= 80) {
        cout << "B" << endl;
    } else if (score >= 70) {
        cout << "C" << endl;
    } else if (score >= 60) {
        cout << "D" << endl;
    } else if (score >= 50) {
        cout << "E" << endl;
    } else {
        cout << "F" << endl;
    }

}









