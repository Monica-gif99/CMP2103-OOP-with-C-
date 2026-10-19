#include <iostream>
using namespace std;

class FinancialRecord {
public:
    virtual void evaluateRisk() const {
        cout << "General financial risk" << endl;
    }

    virtual ~FinancialRecord() = default;
};

class LoanRecord : public FinancialRecord {
public:
    void evaluateRisk() const override {
        cout << "Evaluating loan risk" << endl;
    }
};

class CreditRecord : public FinancialRecord {
public:
    void evaluateRisk() const override {
        cout << "Evaluating credit risk" << endl;
    }
};

int main() {
    LoanRecord loan;
    CreditRecord credit;
    const FinancialRecord* record;

    record = &loan;
    record->evaluateRisk();

    record = &credit;
    record->evaluateRisk();

    return 0;
}