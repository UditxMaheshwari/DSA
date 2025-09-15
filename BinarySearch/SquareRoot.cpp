#include <vector>
using namespace std;
#include<iostream>

 int floorSqrt(int n) {
        int start=0;
        int end=n;
        int mid=start+(end-start)/2;
        int target=n;
        int ans=-1;
        
        while(start<=end)
        {
            if(mid*mid>target)
            {
                end=mid-1;
            }
            
            if(mid*mid<=target)
            {
                ans=mid;
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }

int main()
{
    int n;
    int ans;
    int precision=0;
   
    cout << "enter the no" << endl;
    cin >> n ;
    ans=floorSqrt(n);
    
    cout<< "enter precision" << endl;
    cin>>precision;
    cout<<"ans floor value"<< ans<<endl;
     double finalans=ans;
    double step=0.1;
        for(int i=0;i<=precision-1;i++)
        {
            for(double j=finalans;j*j<=n;j=step+j)
            {
                finalans=j;
            }
            step=step/10;
        }
    
cout<< "ans is" << finalans;
return 0;
}
