#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))
int count(string s,char ch){
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch)cnt++;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag = true;
        while(s.find("U")!=string::npos && count(s,'o')<n-2){
            int idx = 0;
            int mini = 3;
            for(int i=0;i<s.size();i++){
                int j = (i+1)%s.size();
                int k = (i-1+s.size())%s.size();
                while(s[k]=='o') k = (k-1+s.size())%s.size();
                while(s[j]=='o')j = (j+1)%s.size();
                int cnt = 4;
                if(s[i]=='U'){
                    cnt = 0;
                    if(s[j]=='D')cnt++;
                    if(s[k]=='D')cnt++;
                }
                if(cnt<mini){
                    mini = cnt;
                    idx = i;
                }
            }
            s[idx] = 'o';
            int j = (idx+1)%s.size();
            int k = (idx-1+s.size())%s.size();
            while(s[k]=='o') k = (k-1+s.size())%s.size();
            while(s[j]=='o')j = (j+1)%s.size();
            s[j] = (s[j]=='U')?'D':'U';
            s[k] = (s[k]=='U')?'D':'U';
            flag = !flag;
        }
        int cnt = count(s,'U');
        if(cnt%2==0){
            if(flag)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            if(!flag)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}