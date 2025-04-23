// Task 3: Permutation of N
// validator
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'

int main(int argc, char* argv[]) {
    registerValidation(argc,argv);
    int n=inf.readInt(1,100'000,"n");
    inf.readEoln();
    inf.readEof();
    return 0;
}
// generator
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define int long long
#define ll long long
#define ld long double
#define endl "\n"

signed main(int argc, char** argv) {
    registerGen(argc,argv,1);
    ll n=rnd.next(1,100'000);
    cout<<n<<endl;
    return 0;
}
// checker
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc,argv);
    int n=inf.readInt(1,100'000,"n");
    set<int> perm;
    set<int> expect;
    int x;
    for(int i=0;i<n;i++){
        expect.insert(ans.readInt(1,n,"x"));
    }
    for(int i=0;i<n;i++){
        perm.insert(ouf.readInt(1,n,"x"));
    }
    if(perm.size()!=n){
        quitf(_wa,"Output is not a valid permutation");
    }
    if (perm!=expect) {
        quitf(_ok,"Valid permutation but different from expected answer");
    }
    quitf(_ok,"Output is a valid permutation");
}
// -------------------------------------------------------
// Task 4: Random String of Lowercase Letters
// validator
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'

int main(int argc, char* argv[]) {
    registerValidation(argc,argv);
    int n=inf.readInt(1,1'000'000,"n");
    inf.readEoln();
    inf.readEof();
    return 0;
}
// generator
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define int long long
#define ll long long
#define ld long double
#define endl "\n"

signed main(int argc, char** argv) {
    registerGen(argc,argv,1);
    ll n=rnd.next(1,1'000'000);
    cout<<n<<endl;
    return 0;
}
// checker
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'

bool isValidString(const string &s, int n) {
    if (s.size() != n) return false;
    for (char c : s) {
        if (!islower(c)) return false;
    }
    return true;
}

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc,argv);
    int n = inf.readInt();
    string expected = ans.readToken("[a-z]{" + to_string(n) + "}", "expected");
    string contestant = ouf.readToken("[a-z]{" + to_string(n) + "}", "contestant");
    
    if (!isValidString(contestant,n)) {
        quitf(_wa, "Output is not a valid string");
    }
    
    quitf(_ok, "Correct output.");
}
// -------------------------------------------------------
// Task 5: Valid Parentheses Sequence
// validator
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'

int main(int argc, char* argv[]) {
    registerValidation(argc,argv);
    int n=inf.readInt(2,1'000'000,"n");
    if(n%2!=0){
        quitf(_fail,"Given n is not even");
    }
    inf.readEoln();
    inf.readEof();
    return 0;
}
// generator
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define int long long
#define ll long long
#define ld long double
#define endl "\n"

signed main(int argc, char** argv) {
    registerGen(argc,argv,1);
    ll n;
    do{
        n=rnd.next(2,1'000'000);
    }while(n%2!=0);
    cout<<n<<endl;
    return 0;
}
// checker
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'

bool isValidParantheses(const string &s, int n) {
    if (s.size() != n) return false;
    ll x=0;
    for (char c : s) {
        if (c != '(' && c != ')') return false;
        if (c == '(') x++;
        if (c == ')') x--;
        if (x < 0) return false;
    }
    return x==0;
}

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc,argv);
    int n = inf.readInt();
    string expected = ans.readToken("[\(\)]{" + to_string(n) + "}", "expected");
    string contestant = ouf.readToken("[\(\)]{" + to_string(n) + "}", "contestant");
    
    if (!isValidParantheses(contestant,n)) {
        quitf(_wa, "Output is not a valid parantheses");
    }
    
    quitf(_ok, "Correct output.");
}