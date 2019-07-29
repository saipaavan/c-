#include<iostream> 

using namespace std;

int main()
{
    int a[100], n, temp;
    cout << "Size of an Array :";
    cin>>n;
    cout << "\nEnter  Array  Elements :\n";
    for (int i = 0; i < n; i++)
	{
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
	{
        for (int k = 1 + j; k < n; k++)
		{
            if (a[j] > a[k])
			{
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
    cout << "\nArray List in ascending order :";
    for (int l = 0; l < n; l++)
	{
        cout << a[l] << " ";
    }
    return 0;
}
