#include <iostream>
using namespace std;

class Solution
{
public:
    int count = 0;
    ~Solution(){
         cout << count <<endl;
    }
    int power(int base, int exponent)
    {
        /* This is the Brute force approach*/
        // if (exponent == 0)
        // {
         
        //     return 1;
        // }

        // count++;
        // return base * (power(base, exponent - 1));

        // // /* This is the optimized approach*/
        if (exponent == 0)
            return 1;
        if (exponent == 1)
        {
            return base;
        };
        if (exponent % 2 == 0)
        {
            count++;
            return power(base, exponent / 2) * power(base, exponent / 2);
        }
        count++;
        return power(base, exponent / 2) * power(base, exponent / 2) * base;
    }
};
int main()
{
    Solution sol;
    cout << sol.power(2, 8) << endl; // Output: 8
    return 0;
}