// Q2
//#include <iostream>
//#include<string>
//using namespace std;
//
//
//
//
//class Bank {
//private:
//
//	string depositer;
//	string accountNum;
//	double balance;
//
//
//public:
//	Bank()
//	{
//		depositer = "bassant";
//		accountNum = "s1200444";
//		balance = 1000;
//	}
//
//	void show()
//	{
//		cout << "depositer ="<< depositer << endl;
//		cout << "account number ="<< accountNum << endl;
//		cout <<"balance ="<<balance << endl;
//	}
//
//
//	void deposit(float x)
//	{
//		balance = balance + x;
//
//	}
//
//	void withdraw(float z)
//	{
//		if (balance > z)
//		{
//			balance = balance - z;
//		}
//		else
//		{
//			balance = balance;
//		}
//	}
//
//
//};
//
//
//
//int main() {
//	Bank y;
//	y.show();
//	float x = 2000;
//	y.deposit(x);
//	y.show();
//	float z=10000;
//	y.withdraw(z);
//	y.show();
//	system("pause");
//
//}
//********************************************************************************************************************


//Q2 


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//private :
//	static const int LIMIT = 25;
//	string lname;
//	 char fname[LIMIT];
//public:
//	Person()
//	{
//		lname = " ";
//		fname[0] = '\0';
//	}
//	Person(const string & ln, const char * fn = "HeyYou")  // fe error hena msh 3arfa a7eloh :D 
//	{
//		lname =  ln;
//		fname[LIMIT] = fn ;
//	}
//
//	void show()
//	{
//		cout << fname[LIMIT] << " " << lname << endl;
//	}
//
//	void formalShow()
//	{
//		cout << lname << " " << fname[LIMIT] << endl;
//	}
//};
//
//int main()
//{
//
//	Person x ;
//    x.show() ;
//
//  system("pause");
//
//}


//***********************************************************************************************************************

//Q6


#include<iostream>
#include<string>
using namespace std;

class Move
{
private :
	double x;
	double y;
	
public:
	Move(double a , double b)
	{
		x = a;
		y = b;
	}
	void show() {
		cout << "x =" << x <<  endl;
		cout << "y =" << y << endl;
	}
	void moveAdd(const Move & m)
	{
		x = m.x + x ;
		y = m.y + y ;
	}
	void reset()
	{
		x = 0;
		y = 0;
	}
};

int main()
{
	Move m(1, 1);
	Move y(6, 8);
	y.moveAdd(m);
	y.reset();
	y.show();


	system("pause");

	
}    


// ???? ??? :D