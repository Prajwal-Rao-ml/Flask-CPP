#include <iostream>
#include <unordered_map>
using namespace std;

class UniqueElement
{
public:
    static void acceptElements(int array[], int size)
    {
        for (int i = 0; i < size; i++)
            cin >> array[i];
    }

    static void printArray(int array[], int size)
    {
        cout << "The eklements of the array are " << endl;
        for (int i = 0; i < size; i++)
            cout << array[i] << " ";
    }
    int uniqueELement(int array[], int size, unordered_map<int, int> &map)
    {
        for (int i = 0; i < size; i++)
        {
            map[array[i]]++;
        }
        for (auto &[key, value] : map)
        {
            if (value == 1)
            {
                return key;
            }
        }
        return -1;
    }
};

int main()
{
    unordered_map<int, int> map = {};
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int array[size];
    cout << "Eneter the elements of the array" << endl;
    UniqueElement::acceptElements(array, size);
    UniqueElement uq;
    cout << "Unique element is:" << endl;
    int num = uq.uniqueELement(array, size, map);
    if (num == -1)
        cout << "No Unique elements" << endl;
    else
        cout << num << endl;
    return 0;
}