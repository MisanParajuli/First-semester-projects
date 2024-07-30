//Author: Misan Parajuli
//Purpose: To ask find out the number of installments required to pay off the loan entered by the user.
//Pre-condition: The amount of loan, installment amount and interest rates are provided.
//Post-condition: The number of loop executed is stored and displayed as the no. of installments.

#include <iostream>
using namespace std;

int main() {
      double loan, installment, interest;
      cin >> loan;
      cin >> installment;
      cin >> interest;

      int i = 0;

      while (loan>0){
         loan = (loan * interest + loan) - installment;
         i=i+1;
      }

      cout << i;
      if (i==1){
         cout << " payment" << endl;
      }

      else {
         cout << " payments" << endl;
      }
   return 0;
}
