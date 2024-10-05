#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	for (long long int r=0;r<t;r++){
	    long long int n;
	    cin>>n;
	    long long ans = 0;
        long long prev = 0;
        for (long long int i = 1; i <= n; ++i) {
            long long cur=prev;
            cur=(cur*2)%mod;
            cur=(cur+((i-1)*(i-1))%mod)%mod;
            long long res = 1;
            long long a=2;
            long long b= n-i;
            while(b){
                if (b & 1){
                    res = (res * a) % mod;
                }
                a = (a * a) % mod;
                b >>= 1;
            }
            ans=(ans+(cur*res)%mod)%mod;
            prev=cur;
        }
        ans = (ans * 2) % mod;
        cout<<ans<<endl;
	}
    return 0;
}
