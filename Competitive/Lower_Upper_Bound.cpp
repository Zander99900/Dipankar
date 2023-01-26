#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &v, int element)
{
    int low = 0, high = v.size() - 1;
    int mid;
    while (high - low > 1)
    {
        int mid = (high + low) / 2;
        if(v[mid] < element){
            low = mid + 1;
        }
        else{high = mid;}
    }

    if(v[low] >= element){
        return low;
    }
    if(v[high] >= element){
        return high;
    }
    return -1;
}

int upper_bound(vector<int> &v, int element)
{
    int low = 0, high = v.size() - 1;
    int mid;
    while (high - low > 1)
    {
        int mid = (high + low) / 2;
        if(v[mid] <= element){
            low = mid + 1;
        }
        else{high = mid;}
    }

    if(v[low] > element){
        return low;
    }
    if(v[high] > element){
        return high;
    }
    return -1;
}
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int element;
    cin >> element;
    cout << "Lower Bound means it prints the element if present in vector, else it prints the next greater element"<< endl;
    int lb = lower_bound(v, element);
    cout << lb << " " << (lb!= -1 ? v[lb]: -1) << endl;
    cout << "Upper bound doesn't care whether the element is present in vector or not, it will always print the next greater integer present in vector " << endl;
    int ub = upper_bound(v, element);
    cout << ub << " " << (ub!= -1 ? v[ub]: -1) << endl;
    return 0;
}
