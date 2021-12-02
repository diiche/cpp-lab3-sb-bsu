#include<iostream> 
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;

    cout << " Enter the amount of integers to sum = ";
    cin >> k;

    while (1) // loop is working until the input of program will be correct 
    {
        if (cin.fail()) // if input is wrong
        {
            cin.clear(); // puts us back in 'normal' operation mode 
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // removes the wrong input 
            cout << "Wrong input, please try again: "; // promt 
            cin >> k;
        }
        else // if input is correct 
        {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove the wrong input 
            break; // exit loop 
        }
    }

    do {
        if (k == 0) //if user enter 0, cycle will be finished
            break;

        cout << "Enter integer nr. " << i << ": ";
        cin >> number;
        // the same actions as for k 
        while (1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Wrong input, please try again: ";
                cin >> number;
            }
            else
            {
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
            }
        }
        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k;
    return 0;
}
