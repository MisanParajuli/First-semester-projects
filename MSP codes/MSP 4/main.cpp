//Author: Misan Parajuli
//Purpose: To create a program that reads students' grades and process them


#include <iostream>
#include <string>
#include <vector>


using namespace std;


double no_of_students;
int index=0;


    struct data{

        string name;
        string netid;
        double msp1, msp2, msp3,msp4, labcourse;
        double midterm, finale, quiz1, quiz2, quiz3, quiz4;
         };


void process (data student);

int main()
{


    cout << "Enter Number of Students ";
    cin >> no_of_students;



    data student[no_of_students];

    for (int i=0; i < no_of_students; i++){

        data student[i];

            cout << "Enter student " << i+1 <<"'s name" <<endl;
            cin >> student[i].name;
            cout << "Enter student " << i+1 <<"'s netid" <<endl;
            cin >> student[i].netid;

            cout << "Score in MSP 1:" <<endl;
            cin >> student[i].msp1;
            cout << "Score in MSP 2:" <<endl;
            cin >> student[i].msp2;
            cout << "Score in MSP 3:" <<endl;
            cin >> student[i].msp3;
            cout << "Score in MSP 4:" <<endl;
            cin >> student[i].msp4;
            cout << "Score in Lab course:" <<endl;
            cin >> student[i].labcourse;

            cout << "Score in midterm:" <<endl;
            cin >> student[i].midterm;
            cout << "Score in final:" <<endl;
            cin >> student[i].finale;
            cout << "Score in Quiz 1:" <<endl;
            cin >> student[i].quiz1;
            cout << "Score in Quiz 2:" <<endl;
            cin >> student[i].quiz2;
            cout << "Score in Quiz 3:" <<endl;
            cin >> student[i].quiz3;
            cout << "Score in Quiz 4:" <<endl;
            cin >> student[i].quiz4;


    }
    for (int i=0; i<no_of_students; i++){
    cout << "The overall grade of " << student[i].name <<" is ";
    process (student[i]);
    }



};

double bigger_score[no_of_students];
double smaller_score[no_of_students];

    void process (data student){

        double msp_sum[no_of_students],
        double lowest_msp=0;
        double quiz_sum[no_of_students],
        double lowest_quiz=0;

        for (int i=0; i<no_of_students; i++){

            msp_sum[i]= student[i].msp1 + student[i].msp2 + student[i].msp3 + student[i].msp4;
            quiz_sum[i]= student[i].quiz1 + student[i].quiz2 + student[i].quiz3 + student[i].quiz4;

            if (student[i].msp1 <= student[i].msp2 && student[i].msp1 <= student[i].msp3 && student[i].msp1 <= student[i].msp4){
                lowest_msp= student[i].msp1;
            }

            else if (student[i].msp2 <= student[i].msp1 && student[i].msp2 <= student[i].msp3 && student[i].msp2 <= student[i].msp4){
                lowest_msp= student[i].msp2;
            }

             else if (student[i].msp3 <= student[i].msp1 && student[i].msp3 <= student[i].msp2 && student[i].msp3 <= student[i].msp4){
                lowest_msp= student[i].msp3;
            }

             else if (student[i].msp4 <= student[i].msp1 && student[i].msp4 <= student[i].msp2 && student[i].msp4 <= student[i].msp3){
                lowest_msp= student[i].msp4;
            }


            msp_sum[i] = msp_sum[i] - lowest_msp;


            if (student[i].quiz1 <= student[i].quiz2 && student[i].quiz1 <= student[i].quiz3 && student[i].quiz1 <= student[i].quiz4){
                lowest_quiz= student[i].quiz1;
            }

            else if (student[i].quiz2 <= student[i].quiz1 && student[i].quiz2 <= student[i].quiz3 && student[i].quiz2 <= student[i].quiz4){
                lowest_quiz= student[i].quiz2;
            }

            else if (student[i].quiz3 <= student[i].quiz1 && student[i].quiz3 <= student[i].quiz2 && student[i].quiz3 <= student[i].quiz4){
                lowest_quiz= student[i].quiz3;
            }

            else if (student[i].quiz4 <= student[i].quiz1 && student[i].quiz4 <= student[i].quiz2 && student[i].quiz4 <= student[i].quiz3){
                lowest_quiz= student[i].quiz4;
            }

            quiz_sum[i] = quiz_sum[i] - lowest_quiz;


        if (msp_sum[i] >= quiz_sum[i]){
            bigger_score[i] = (msp_sum[i] * 60)/100;
            smaller_score[i] = (quiz_sum[i] * 40)/100;
            score[i] = bigger_score[i] + smaller_score[i];
            score[i] = (score[i]/170) * 100;
        }

        else if (quiz_sum[i] >= msp_sum[i]){
            bigger_score[i] = quiz_sum[i] * 60/100;
            smaller_score[i] = msp_sum[i] * 40/100;
            score[i] = bigger_score[i] + smaller_score[i];
            score[i] = (score[i]/170) * 100;
        }


        if (score[i] >= 90){
            cout << "A" <<endl;
        }

        else if (score[i] >= 80 && score[i] < 90){
            cout << "B" <<endl;
        }

        else if (score[i] >= 70 && score[i] < 80){
            cout << "C" <<endl;
        }


        else if (score[i] >= 60 && score[i] < 70){
            cout << "D" <<endl;
        }

        else if (score[i] >= 50 && score[i] < 60){
            cout << "E" <<endl;
        }
        esle if (score[i] < 50){
            cout << "F" endl;
        }


}



    return 0;
}




