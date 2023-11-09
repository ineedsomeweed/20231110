#include <iostream>  
using namespace std;

int main()
{
	int v1 = 0, v2 = 1, v3, j;
	unsigned n=100000000000000000;
	/*cout << "Please Enter the number of elements you want in the Fibonacci sequence: ";
	cin >> n; */
	cout << "The fibonacci series: " << v1 << " " << v2 << " ";
	for (j = 2; j < n; ++j) //loop starts from 2 because 0 and 1 are already printed    
	{
		v3 = v1 + v2;
		cout << v3 << " ";
		v1 = v2;
		v2 = v3;
	}
	return 0;
}