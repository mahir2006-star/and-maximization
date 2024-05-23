#include "testlib.h"
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    vector<int> jpath;
    int jlen = inf.readInt();
    for (int i = 0; i < jlen; i++) {
        jpath.push_back(ans.readInt());
    }
    for(int j=0;j<jlen;j++){
        int pans = ouf.readInt(0,1000000000, "final ans");
        if(jpath[j]!=(pans)){
             quitf(_wa, "The ans is wrong: expected = %d, found = %d",jpath[j],pans);
        }
    }
    quitf(_ok, "The answer is correct");
}
