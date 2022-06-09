/*
//Input Format

The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries).
Each line  of the  subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the -element array located at .
Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, q, k,s,j;
    cin>>n>>q;
    int** arr= new int*[n];
    for (int i=0; i<q; i++)
    {
        cin>>k;
        arr[i] = new int [k];
        for(int k1 = 0; k1<k; k1++)
        {
            cin>>(arr[i][k1]);
        }
    }
    for(int i=0; i<q; i++)
    {
        cin>>s>>j;
        cout<<arr[s][j]<<endl;
    }
    return 0;
}
