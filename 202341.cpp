#include <iostream>

void statement_one(void);
void statement_two(void);
int main()
{
	statement_one();
	statement_one();
	statement_two();
	statement_two();
	return 0;
}

void statement_one(void)
{
	using  std::cout;
	using  std::endl;
	cout << "tree blind mice" << endl;
}
void statement_two(void)
{
	using  std::cout;
	using  std::endl;
	cout << "see how they run" << endl;
}