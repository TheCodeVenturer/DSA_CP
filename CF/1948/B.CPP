#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string nums[n];
        int maxi = 0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        maxi = stoi(nums[n-1]);
        bool flag = true;
        for(int i=n-2;i>=0;i--){
            int temp = stoi(nums[i]);
            if(temp<=maxi)maxi = temp;
            else{
                string temp2 = nums[i];
                sort(temp2.begin(),temp2.end());
                if(temp2 == nums[i] && nums[i].back() - '0' <=maxi) maxi = nums[i][0] - '0';
                else{
                    flag = false;
                    break;
                }
            }
            if(!flag)break;
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
