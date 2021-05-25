/*Count the number of prime numbers less than a non-negative number,n.*/

//TODO solution

#include <iostream>
#include <cmath>

using namespace std;
class Solution
{
public:
    int count_Primes(int n)
    {
        int Counter = 0;
        for (int i = 2; i < n; i++)
        {
            if (isPrime(i))
            {

                Counter++;
            }
        }
        return Counter;
    }

    bool isPrime(int n)
    {
        int n_ = int(sqrt(n));
        for (int i = 2; i <= n_; i++)
        {
            if (0 == n % i)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution *solution = new Solution();
    int n = 8;
    cout << "Number of prime numbers less than " << n << " is " << solution->count_Primes(5) << endl;
    n = 30;
    cout << "Number of prime numbers less than " << n << " is " << solution->count_Primes(30) << endl;
    n = 100;
    cout << "Number of prime numbers less than " << n << " is " << solution->count_Primes(100) << endl;
    return 0;
}