#include<iostream> 
using namespace std;
int main()
{
	int k, i = 1, sum_k = 0, number; //declaring variables 
	cout << " Enter the amount of integers to sum = "; cin >> k;
	do {
		if (k == 0) //if user enter 0, cycle will be finished
			break;
		cout << "Enter integer nr. " << i << ": ";
		cin >> number;
		sum_k += number;
		i++;
	} while (i <= k);
	cout << "The total sum of " << k << " integers is: " << sum_k;
	return 0;
}
