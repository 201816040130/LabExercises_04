#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h" // Account class definition

class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount( double, double );
      virtual void credit(double);
   // function prototype for virtual function credit,
      virtual bool debit(double);
   //function prototype for virtual function debit
private:
   double transactionFee; // fee charged per transaction

   // utility function to charge fee
   void chargeFee();
}; // end class CheckingAccount

#endif
