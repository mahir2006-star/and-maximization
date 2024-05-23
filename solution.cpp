#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class Trie{
      public:
      int val;
      map<int,Trie*>next;
      Trie(int c){
        val=c;next.clear();
      }
};
string decTobin(long long n){
    string res="";
    for (int i = 63; i >= 0; i--) {
        long long k = n >> i;
        if (k & 1)
            res+="1";
        else
            res+="0";
    }
    return res;
}
long long maxand(vector<long long>&v){
      Trie* start=new Trie(-1);
      long long maxnum=0;
      for(int i=0;i<v.size();i++){
          string t=decTobin(v[i]);
          Trie* d=start;
          long long newans=0;
          for(int j=0;j<t.length();j++){
              long long k=0;
              map<int,Trie*>m=d->next;
              if(m.find(t[j]-48)!=m.end()){
                d=m[t[j]-48];
                k=(t[j]-48)<<(63-j);
              }else if(m.find(!(t[j]-48))!=m.end()){
                d=m[!(t[j]-48)];
                k=0;
              }
              newans=newans|k;
          }
          d=start;
          for(int j=0;j<t.length();j++){
              map<int,Trie*>m=d->next;
              if(m.find(t[j]-48)!=m.end()){
                d=m[t[j]-48];
              }else{
                Trie* n=new Trie(t[j]-48);
                m[t[j]-48]=n;
                d->next=m;
                d=n;
              }
          }
          maxnum=max(maxnum,newans);
      }
      return maxnum;
}
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freeopen("input.txt","r",stdin);
        freeopen("output.txt","w",stdout);
    #endif
}
int main(){
    file_i_o();
    long long t;
    cin>>t;
    while(t--){
         long long n;
         cin>>n;
         vector<long long>v(n,0); 
         for(long long i=0;i<n;i++){
             cin>>v[i];
         }
         cout<<maxand(v)<<endl;
    }
    return 0;
}
