#include <vector>
using namespace std;
#include<iostream>

void WavePrint(vector<vector<int>>v)
{
    int m=v.size();
    int n=v[0].size();
    for(int Col=0;Col<m;Col++)
    {
        if((Col &1)==0)
        {
            for(int i=0;i<n;i++)
            {
                cout << v[i][Col]<<" ";
            }
        }
            else
            {
                for(int j=m-1; j>=0;j--)
                {
                    cout << v[j][Col]<<" ";
                }
            }
        }
    }

int main()
{
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}};
        WavePrint(v);
        return 0;
        
    }

