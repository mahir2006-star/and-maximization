#include "testlib.h"
#include<iostream>
using namespace std;
int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int t=atoi(argv[1]);
    cout<<t<<endl;
    while(t--){
        int n=rnd.next(1,2000);
        cout<<n<<endl;
        while(n--){
        cout<<(rnd.next(1,1000000000))<<endl;
        }  
    }
}
