                Chained Inheritance
Inheritance allows one class to reuse accessible data and functions from another class. Chained inheritance occurs when a derived class becomes the base for another class, forming a chain.
In inheritance.cpp, FinancialRecord is the base class and contains the protected member income. LoanRecord inherits from FinancialRecord and adds the private member loanAmount. SecuredLoanRecord then inherits from LoanRecord and adds the private member collateralValue. The inheritance chain is FinancialRecord LoanRecord  SecuredLoanRecord.
The SecuredLoanRecord object can display the income, loan amount and collateral value through displaySecuredLoan(). This shows how functionality can be reused across multiple levels.
Example output:
Income: 1.5e+06
Loan amount: 500000
Collateral value: 800000
                   Polymorphism
Polymorphism means that the same interface can produce different behaviour for different objects. In polymorphism.cpp, FinancialRecord declares evaluateRisk() as a virtual function. LoanRecord and CreditRecord override the function to display different messages.
A pointer to FinancialRecord refers first to a LoanRecord object and then to a CreditRecord object. When evaluateRisk() is called, the version matching the actual object runs. This demonstrates runtime polymorphism.
Example output:
Evaluating loan risk
Evaluating credit risk
