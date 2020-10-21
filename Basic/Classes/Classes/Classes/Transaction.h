#include <string>

class Transaction
{
private:
	int amount;
	std::string type;	// a better way exists
public:
	Transaction(int amount, std::string type);
	std::string Report();
};