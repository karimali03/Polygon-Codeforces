#define _CRT_SECURE_NO_WARNINGS
#include "testlib.h"
#include <bits/stdc++.h>
#define ln "\n"
using namespace std;
typedef long long ll;
 
 
// test cases 1 <= t <= 2000
// n 1 <= n <= 5000
// s_len 1 <= len <= 100
// sum n <= 5000 
 
string change(string a){
    for(auto &x : a){
        if(rnd.next(0,1)) x = tolower(x);
        else x = toupper(x);
    }
    return a;
}


int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int test_count = opt<int>("test-count",1);
    int min_n = opt<int>("min-n",1);
    int max_n = opt<int>("max-n",5'000);
    int min_len = opt<int>("min-len",1);
    int max_len = opt<int>("max-len",100);
    int sum_n = opt<int>("sum-n",5000);
    // sum n <= 5000       2 5000  {2000 3000} {2500 2500} {1000 4000}
    cout<<test_count<<"\n";
    vector<int> n_values =  rnd.partition(test_count, sum_n , min_n);
    for(int t = 1 ; t <= test_count; t++){
        setTestCase(t);
        int n = n_values[t-1];
        vector<string>str(n);
        for(int i = 0 ; i <  n ; i++){
            int len = rnd.next(min_len,max_len);
            string s(len,'a');
            for(int k = 0 ; k < len ; k++){
                if(rnd.next(0,1)) s[k] = rnd.next('a','z');
                else s[k] = rnd.next('A','Z');
            }
            str[i] = s;
        }
        // saas dad sAaS kdmsalkf fsaf
        int itr = rnd.next(0,n);
        while(itr--){
            int a = rnd.next(0,n-1);
            int b = rnd.next(0,n-1);
            str[a] = change(str[b]);
        }
        cout<<n<<"\n";
        println(str); // jdsd dssd dddsd

    }

    return 0;
}
 
 
/*
    // atoi(argv[1]);
	// rnd.next(l, r), or it can take regex like: "[a-zA-z0-9]{1,10}"
    // getting the options 
   // int test_count = opt<int>("test-count");
   // vector<int> lengths = rnd.partition(test_count, sum_n);
 
    <#assign testCount = 1000 >
    <#list 1..4 as i>
    gen -test-count ${testCount}  -sum-n 200000 -min-a 1 -max-a 100000000  > $
    gen -test-count ${testCount}  -sum-n 200000 -min-a -100000000 -max-a -1  > $
    gen -test-count ${testCount}  -sum-n 200000 -min-a -100000000 -max-a 100000000  > $
    <#assign testCount = testCount / 10>
    </#list>
 
*/


/*

<#assign testCount = 2000 >
<#list 1..4 as i>
    gen -test-count ${testCount}  -sum-n 5000 -min-len 50 > $
    gen -test-count ${testCount}  -sum-n 5000 -max-len 50 > $
    gen -test-count ${testCount}  -sum-n 5000 -min-len 100 > $
    gen -test-count ${testCount}  -sum-n 4000  > $
<#assign testCount = testCount / 10>
</#list>
gen 1  -sum-n 5000 -min-len 100  > $
gen 2 -sum-n 5000 -max-len 1 > $
gen -sum-n 1 > $


*/