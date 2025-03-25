#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);

    sort(v.begin(), v.end());

    cout << "5 is present? : " << binary_search(v.begin(), v.end(), 5) << endl;

    cout << "6 is present? : " << binary_search(v.begin(), v.end(), 5) << endl;

    // Lower bond and upper bound

    cout << "Lower Bound : " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper Bound : " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    return 0;
}