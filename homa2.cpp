
using namespace std;
#include <iostream>
int stepin(int base, int a)
{
    int q = base;
    for (int i = 1; i < a - 1; i++)
    {
        q *= base;

    }
    return q;
}

int sum(int start, int finish) 
{
    int sum = 0;
    for (int i = start; i < finish; i ++ ) 
    {
        sum += i;
    }
    return sum;
}

void perfect(int start, int finish) 
{
    int sumi = 0;
    for (int i = start; i < finish; i++) 
    {
        sumi = 0;
        for (int j = 1; j < i; j++) 
        {
            
            if (i % j == 0)
            {
                sumi += j;
            }

          
        }
        if (sumi == i)
        {
            cout << i << " ";
        }
        
        
    }
}

int card(char a, char mast) 
{
    return a;
}

int lucky(int a) 
{
    int first = a / 100000;
    int second = a / 10000 % 10;
    int third = a / 1000 % 100 % 10;
    int forth = a / 100 % 1000 % 100 % 10;
    int fifth = a % 1000 / 10 % 10;
    int six = a % 10;
    if ((third + second + first) == (forth + fifth + six)) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int search(int arr[], int value)
{
    int size1 = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == value) 
        {
            return i;
        }
    }
}


int main()
{
    int arr[]{ 1, 2, 3, 4, 5, 6, 7 };
    int a = 123456;
    cout << stepin(2, 4) << endl;
    cout << sum(1, 6) << endl;
    perfect(1, 1000);
    cout << endl;
    cout << lucky(123321) << endl;
    cout << search(arr, 5);
    
    
   
}

