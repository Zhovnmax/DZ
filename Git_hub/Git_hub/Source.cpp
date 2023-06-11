#include <iostream> 
#include <time.h>
#include "Source1.h"
using namespace std;
int  Suma(int a, int b)
{

	return a + b;
}

int Sered_Ar(int a, int b)
{
	return (a + b) / 2;
}
int main()
{
	int a, b;

	cout << "Enter a, b:" << endl;
	cin >> a >> b;
	cout << Suma(a, b);

	cout << Sered_Ar(a, b);

	cout << Max(a, b);


	return 0;

}