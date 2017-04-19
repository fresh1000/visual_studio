
class ATM {
private:
	double balance ;
	double balanceForInterest;
public:
	ATM(double balance);
	double getBalance();
	double getBalanceForInterest();
	void withdrawn();
	void deposit();
	void interest();
};