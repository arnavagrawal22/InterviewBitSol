#define ll long long int
#define pi acos(-1)
#define ull unsigned long long
#define nl printf("\n")
#define MAXN 1000005
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define     all(x)      x.begin() , x.end()
#define fio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sp(n)  fixed<<setprecision(n)
#define    mod    998244353
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define INF 100000000

string Solution::solve(string s) {
	string s1=s;
	int n,i,y,x;
	n=s.size();
	string a="";
	string a2="";
	string ans="";
	string res="";
	for(i=n/2;i<n;i++)
	{
		s[i]=s[n-i-1];
	}
	if(s>s1)
	{
		return s;
	}
	else
	{
		s=s1;
	}
		int cnt=0;
			for(i=0;i<n;i++)
			{
				if(s[i]=='9')
				cnt++;
			}
			if(cnt==n)
			{
				n++;
				ans+='1';
				for(i=1;i<n-1;i++)
				{
					ans+='0';
				}
				ans+='1';
				return ans;
			}
	cnt=0;
	for(i=1;i<n-1;i++)
	{
		if(s[i]=='9')cnt++;
	}
	if(cnt==n-2)
	{
	 y=s[0]-'0';
		y++;
		ans+=y+'0';
		for(i=1;i<n-1;i++)
		ans+='0';
		ans+=y+'0';
		return ans;
	}
	if(n%2)
	{ 
		x=s[n/2]-'0';
		if(x!=9)
		{
			x++;
			a+=x+'0';
			for(i=0;i<n/2;i++)
			{
				a2+=s[i];
			}
			ans=a2+a;
			n--;
			for(i=n/2;i<n;i++)
			{
				ans+=ans[n-i-1];
			}
			return ans;
		}
		else
		{
			for(i=n/2;i>=0;i--)
			{
				x=s[i]-'0';
				if(x!=9)
				{
					x++;
					a+=x+'0';
					break;
				}
				else
				{
					a+='0';
				}
			}
			reverse(all(a));
			for(int k=0;k<i;k++)
			{
				a2+=s[k];
			}
			ans=a2+a;
			n--;
			for(i=n/2;i<n;i++)
			{
				ans+=ans[n-i-1];
			}
			return ans;

		}
	}
	
		x=s[n/2-1]-'0';
		if(x!=9)
		{
			x++;
			a+=x+'0';
			for(i=0;i<n/2-1;i++)
			{
				a2+=s[i];
			}
			ans=a2+a;
			for(i=n/2;i<n;i++)
			{
				ans+=ans[n-i-1];
			}
			return ans;
		}
		else
		{
			for(i=n/2-1;i>=0;i--)
			{
				x=s[i]-'0';
				if(x!=9)
				{
					x++;
					a+=x+'0';
					break;
				}
				else
				{
					a+='0';
				}
			}
			reverse(all(a));
			for(int k=0;k<i;k++)
			{
				a2+=s[k];
			}
			ans=a2+a;
			n--;
			for(i=n/2;i<n;i++)
			{
				ans+=ans[n-i-1];
			}
			return ans;

		}
    // int len = A.length()-1;
    // int flag = 1;
    // for(int i = 0; i <= len ;i++){
    //     if(A[i] != '9'){
    //         flag = 0;
    //     }
    // }
    // if(flag){
    //     for(int i = 0; i <= len ;i++){
    //         A[i] = '0';
    //     }
    //     A.insert(0,"1");
    //     A[len+1] = '1';
    //     return A;
    // }
    // else{
    //     if(len%2 == 0){
    //         int n = len/2;
    //         if(A[n-1] < A[n+1]){
    //             if(A[n]!=9){
    //                 A[n]+= 1;
    //                 for(int i = 0 ; i < n; i++){
    //                     A[len - i] = A[i];
    //                 }
    //                 return A;
    //             }
    //             else{
    //                 // see later
    //             }
    //         }
    //         else if(A[n-1] > A[n+1]){
    //             for(int i = 0 ; i < n; i++){
    //                 A[len - i] = A[i];
    //             }
    //             return A;
    //         }
    //     }
    //     else{
    //         int n = len/2;
    //         if(A[n] < A[n+1]){
    //             if(A[n]!='9'){
    //                 A[n] ++;
    //                 for(int i = 0 ; i <= n; i++){
    //                     A[len - i] = A[i];
    //                 }
    //                 return A;
    //             }
    //         }
    //         else if(A[n] > A[n+1]){
    //             for(int i = 0 ; i <= n; i++){
    //                 A[len - i] = A[i];
    //             }
    //             return A;
    //         }
    //     }

        
    // }

    
}
