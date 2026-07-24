#include <iostream>
#include <vector>
#include <unordered_map>
#include<unordered_set>
using namespace std;

class UniqueOccurances
{
private:
    unordered_map<int, int> map;
    unordered_set<int> set;
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int result = 0;
        for (int x : arr)
        {
            map[x]++;
        }
        for (auto &[key, value] : map)
        {
            if(set.count(value)==0){
                set.insert(value);
            }
            else{
                return false;
            }
        }
        return true;
    }
};

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    UniqueOccurances obj;
    if (obj.uniqueOccurrences(arr)) 
    {
        cout << "All occurrences are unique." << endl;
    }
    else
    {
        cout << "Occurrences are not unique." << endl;
    }
    return 0;
}