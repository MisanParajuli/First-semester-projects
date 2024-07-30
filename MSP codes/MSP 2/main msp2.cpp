//Author: Misan Parajuli
//Date: 11/02/2023
//Pre: Three integer values are provided by the user.
//Post: Average of three test scores are calculated.

#include <iostream>
#include <iomanip>

using namespace std;

   //Function name: Average
   // Purpose: To take the average of three numbers and two greatest numbers

  double averages(int score1, int score2, int score3, double& best_avg) {
  double avg;
  int greater1 = 0, greater2 = 0;
  if (score1 >= score2 && score1 >= score3) {
    greater1 = score1;
    if (score2>= score3) {
      greater2 = score2;
    }
    else {
      greater2 = score3;
    }
  } else if (score2 >= score3 && score2 >= score1) {
    greater1 = score2;
    if (score1 >= score3) {
      greater2 = score1;
    } else {
      greater2 = score3;
    }
  } else if (score3 >= score1 && score3 >= score2) {
    greater1 = score3;
    if (score1 >= score2) {
      greater2 = score1;
    } else {
      greater2 = score2;
    }
  }

  best_avg = (greater1 + greater2) / 2.0;

  avg = (score1 + score2 + score3) / 3.0;
  return avg;
}

int main() {
  int a, b, c;
  double avg, best_avg;
  cin >> a >> b >> c;
  avg = averages(a, b, c, best_avg);

  //For 2 place decimals
 cout << setprecision(2) << fixed << avg << " " << setprecision(2) << fixed << best_avg << endl;
  return 0;
}

