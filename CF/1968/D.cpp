#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n,k,pb,ps,sTot=0,BTot=0,maxib = 0,maxis=0;
        cin>>n>>k>>pb>>ps;

        pb--;
        ps--;
        vi p(n),a(n);
        for(int i=0;i<n;i++){ cin>>p[i];p[i]--;}
        for(int i=0;i<n;i++) cin>>a[i];
        int ab = k%n;
            vi aDupS(ab),aDupB(ab);
            int dupPb = pb,dupPs = ps;
            for(int i=0;i<k;i++){
                aDupS[i] = a[ps];
                aDupB[i] = a[pb];
                ps = p[ps];
                pb = p[pb];
            }
            pb = dupPb;
            ps = dupPs;
            maxis = *max_element(all(aDupS));
            maxib = *max_element(all(aDupB));
        cout<<maxis<<" "<<maxib<<endl;
        int dupK = k;
        while(k--){
            BTot +=a[pb];
            cout<<BTot<<" ";
            if(a[pb]==maxib)break;
            pb = p[pb];
        }
        cout<<endl<<k<<endl;
        if(k>0)
            BTot += k*maxib;
        cout<<BTot<<endl;
        k = dupK;
        while(k--){
            sTot +=a[ps];
            cout<<sTot<<" ";
            if(a[ps]==maxis)break;
            ps = p[ps];
        }
        cout<<endl<<k<<endl;
        if(k>0)sTot += k*maxis;
        cout<<sTot<<endl;
        cout<<BTot<<" "<<sTot<<endl;
        if(BTot>sTot){
            cout<<"Bodya"<<endl;
        }
        else if (BTot<sTot){
            cout<<"Sasha"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}

// 1
// 4 2 3 2
// 4 1 2 3
// 7 2 5 6
// 1
// 8 10 4 1
// 5 1 4 3 2 8 6 7
// 1 1 2 1 2 100 101 102
// 10 8 2 10
// 3 1 4 5 2 7 8 10 6 9
// 5 10 5 1 3 7 10 15 4 3
// 2 1000000000 1 2
// 1 2
// 4 4
// 8 10 4 1
// 5 1 4 3 2 8 6 7
// 1 1 2 1 2 100 101 102
// 5 1 2 5
// 1 2 4 5 3
// 4 6 9 4 2
// 4 2 3 1
// 4 1 3 2
// 6 8 5 3
// 6 9 5 4
// 6 1 3 5 2 4
// 6 9 8 9 5 10
// 4 8 4 2
// 2 3 4 1
// 5 2 8 7
// 4 2 3 1
// 4 1 3 2
// 6 8 5 3
// 2 1000000000 1 2
// 1 2
// 1000000000 2
