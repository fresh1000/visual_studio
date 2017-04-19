class Account
{
private:
	float balance;
	float rate;

public:
	Account();
	Account(float, float);
	float getBalance();
	float getRate();
	void Deposit(float);
	void Withdrawal(float);
	void AccrueInterest(int);
};