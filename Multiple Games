#include<bits/stdc++.h>
using namespace std;
long long int a[200005];
long long int lb[200005];
long long int ub[200005];
int findval(int n)
{
   sort(lb, lb+n);
   sort(ub, ub+n);
   long long int iv =0,mv=0,val=lb[0];
   long long int i=0,j=0;
    while (i<n && j<n)
   {
       if (lb[i] <= ub[j])
      {
          iv++;
        if (iv > mv)
          {
              mv = iv;
              val = lb[i];
          }
          i++;
    }
      else
      {
          iv--;
          j++;
      }
   }
    return mv;
}
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,q,ma,temp,l,r,lv,rv,lnv,rnv;
        cin>>n>>q>>ma;
        memset(lb,0,sizeof(lb));
        memset(ub,0,sizeof(ub));
        map<pair<int,int>,int> m;
        //for(int i=0;i<n;i++)    cout<<lb[i]<<endl;
        for(int i=0;i<n;i++)    cin>>a[i];
        temp=q;
        while(q--)
        {
            cin>>l>>r;
            pair<int,int> p;
            p.first=l;
            p.second=r;
            m[p]++;

        }
        map<pair<int,int>,int>::iterator itr;
        for(itr=m.begin();itr!=m.end();itr++)
        {
           //cout<<itr->first.first<<" "<<itr->first.second<<" "<<itr->second<<endl;
           lv=a[itr->first.first-1];
           rv=min(ma,a[itr->first.first-1]+a[itr->first.second-1]-1);
           if(rv>=lv)
           {
                ub[rv]=ub[rv]+itr->second;
                lb[lv]=lb[lv]+itr->second;
           }
           while(lv+a[itr->first.first-1]+a[itr->first.second-1]<=ma)
           {
               lnv=lv+a[itr->first.first-1]+a[itr->first.second-1];
               rnv=min(ma,rv+a[itr->first.first-1]+a[itr->first.second-1]);
               ub[rnv]=ub[rnv]+itr->second;
               lb[lnv]=lb[lnv]+itr->second;
               lv=lnv;
               rv=rnv;
            }
        }
        long long int ans=lb[0];
        temp=lb[0];
        for(int i=1;i<=ma;i++)
        {
            temp+=lb[i]-ub[i-1];
            ans=max(ans,temp);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
