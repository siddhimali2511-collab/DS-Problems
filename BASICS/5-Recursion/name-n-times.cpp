// print the name n times

#include <iostream>
using namespace std;

// int cnt = 0;
// void name(int n)
// {
//     if (cnt == n)
//         return;
//     cout << "Siddhi" << endl;
//     cnt++;
//     name(n);
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of times you want name to be printed: ";
//     cin >> n;
//     name(n);
// }

void name(int i, int n){
    if(i>n) return;
    cout<<"Siddhi"<<endl;
    name(i+1,n);
}

int main()
{
    int n;
    cout << "Enter the number of times you want name to be printed: ";
    cin >> n;
    name(1, n);
}
