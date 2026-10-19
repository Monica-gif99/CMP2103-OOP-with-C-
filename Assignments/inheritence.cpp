#include <iostream>
using namespace std;

// Base class
class FinancialRecord {
protected:
    double income;

public:
    FinancialRecord(double i) : income(i) {}

    void displayIncome() const {
        cout << "Income: " << income << endl;
    }
};

// LoanRecord inherits from FinancialRecord
class LoanRecord : public FinancialRecord {
private:
    double loanAmount;

public:
    LoanRecord(double i, double loan)
        : FinancialRecord(i), loanAmount(loan) {}

    void displayLoan() const {
        displayIncome();
        cout << "Loan amount: " << loanAmount << endl;
    }
};

// Chained inheritance: SecuredLoanRecord -> LoanRecord -> FinancialRecord
class SecuredLoanRecord : public LoanRecord {
private:
    double collateralValue;

public:
    SecuredLoanRecord(double i, double loan, double collateral)
        : LoanRecord(i, loan), collateralValue(collateral) {}

    void displaySecuredLoan() const {
        displayLoan();
        cout << "Collateral value: " << collateralValue << endl;
    }
};

int main() {
    SecuredLoanRecord record(1500000, 500000, 800000);
    record.displaySecuredLoan();
    return 0;
}