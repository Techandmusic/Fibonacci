#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//this supports much larger integers
unsigned long long int first =0, second = 1, answer;





int main()
{
    //print out the first 2 numbers in the sequence
    cout << first << " " << second << " ";
    //loop gets the new answer by adding the previous 2 numbers together
    for (int i = 0; i < 1000; i++)
    {
        answer = first + second;
        first = second;
        second = answer;
        cout << answer << " ";
    }








    return 0;
}
