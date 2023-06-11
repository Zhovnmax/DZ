#include <iostream> 
#include <time.h>
using namespace std;
int  Suma(int a, int b)
{

	return a + b;
}
int main()
{
	int a, b;

	cout << "Enter a, b:" << endl;
	cin >> a, b;
	cout << Suma(a, b);


	return 0;

}