#define _CRT_SECURE_NO_WARNINGS
#include "testlib.h"
#include <bits/stdc++.h>
#include <unordered_map>
#define endl "\n"
#define all(v) v.begin(),v.end()
#define rt(s) return cout<<s,0
#define sz(s)	(int)(s.size())
#define OO 0x3f3f3f3f3f3f3f3fLL
#define oo 0x3f3f3f3f
using namespace std;
typedef long long ll;
int dx[] { -1, 0, 0, 1, 1, 1, -1, -1 };
int dy[] { 0, -1, 1, 0, 1, -1, 1, -1 };
 
 const int  test_count_min = 1;
 const int test_count_max = 2'000; 
 const int min_n = 1;
 const int max_n = 5'000;
 const int min_len = 1;
 const int max_len = 100;
 const int sum_n = 5'000;

int main(int argc, char** argv) {
   registerValidation(argc, argv);
   // inf input stream file
   int test_count = inf.readInt(test_count_min,test_count_max,"t");
   inf.readEoln();
   int sum = 0;
   for(int t = 1 ; t <= test_count ; t++){
        setTestCase(t);
        int n = inf.readInt(min_n,max_n,"n"); inf.readEoln();
        sum+=n;
        // dsA DDa daAD AFFDS DaA
        for(int i = 0 ; i  < n ; i++){
            inf.readToken("[a-zA-Z]{1,100}");
            if(i < n-1) inf.readSpace();
        }
        inf.readEoln();
   }
   ensuref(sum <= sum_n , "sum n for all test case must not exceed 5000");
   inf.readEof();
   return 0;
}

/*
    inf.readEoln();
    inf.readSpace();
    setTestCase(t);
*/
