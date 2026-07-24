#include <iostream>
using namespace std;

class SwapAlternate
{
public:
    void printArray(int array[], int length)
    {
        cout << "The array is " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void acceptArray(int array[], int length)
    {
        cout << "Enter the elements of the array" << endl;
        for (int i = 0; i < length; i++)
        {
            cin >> array[i];
        }
    }

    void swapAlternateELements(int array[], int length)
    {
        int i = 0, j = i + 1;
        if (length % 2 != 0)
            length = length - 1;
        while (j < length)
        {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
            i+=2;
            j = i + 1;
        }
    }
};

int main()
{
    int length;
    cout << "Enter the number of elements iin the array" << endl;
    cin >> length;
    int array[length];
    SwapAlternate alt;
    alt.acceptArray(array, length);
    alt.swapAlternateELements(array, length);
    alt.printArray(array, length);
    return 0;
}