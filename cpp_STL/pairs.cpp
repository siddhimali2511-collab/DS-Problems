// Pairs - is a part if utility library
#include <iostream>
using namespace std;

int main()
{
    pair<int, string> student = {1, "Siddhi"};

    cout << student.first << "\n";
    cout << student.second << "\n";

    pair<int, pair<int, int>> p = {3, {1, 4}}; // To store more than 2 items in a pair we use the nested property of a pair.
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;

    return 0;
}