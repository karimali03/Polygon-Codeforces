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
#define ln "\n"
using namespace std;
typedef long long ll;
int dx[] { -1, 0, 0, 1, 1, 1, -1, -1 };
int dy[] { 0, -1, 1, 0, 1, -1, 1, -1 };


string lower(string s){
    for(auto &x : s) x = tolower(x);
    return s;
}

vector<string> tokenize(string a)
{
    vector<string> va;
    stringstream sa;
    
    sa << a;
    string cur;
    while (sa >> cur)
        va.push_back(cur);
    return va;
}

int sz;
vector<string>ss;

void readStream(InStream& stream) {
    string temp = stream.readString();
    vector<string> tokens = tokenize(temp);
    if(tokens.size() != 1) stream.quitf( _pe , "first line must contain one number");
    try{
    sz = stoi(tokens[0]);
    if(sz <= 0) stream.quitf(_wa, "number must be greater than zero");
    } catch(...){
        stream.quitf(_wa , "failed to parse the string");
    }
    temp = stream.readString();
    tokens = tokenize(temp);
    ss = tokens;
    if(tokens.size() != sz) stream.quitf(_pe , "expected  %d found %d",sz,tokens.size() );
}




void solve(int tc) {
    int n = inf.readInt(); inf.readEoln();
    set<string>st;
    for(int i = 0 ; i  < n ; i++){
        string s = inf.readToken(); 
        if(i < n-1) inf.readSpace();
        st.insert(s);
    }
    inf.readEoln();
    // output
    readStream(ouf);
    int sz_ouf = sz;
    vector<string>str_ouf = ss;
    // answer
    readStream(ans);
    int sz_ans = sz;
    vector<string>str_ans = ss;
    /*
    1) stirngs in output in input
    */
   if(sz_ans != sz_ouf) quitf(_wa,"expected %d found %d",sz_ans,sz_ouf);
   for(int i = 0 ; i < sz_ouf ; i++){
        if(!st.count(str_ouf[i]))
        quitf(_wa , "%s is not in the input",str_ouf[i].c_str());
   }

   for(int i = 0 ; i  < sz_ans ; i++){
      str_ans[i] = lower(str_ans[i]);
      str_ouf[i] = lower(str_ouf[i]);
   }
   sort(all(str_ans));
   sort(all(str_ouf));
   if(str_ans != str_ouf) quitf(_wa , "wrong answer");
}

int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_count = inf.readInt();
    inf.readEoln();
    for(int t = 1 ; t <= test_count ; t++){
        setTestCase(t);
        solve(t);
    }
    quitf(_ok,"The answer is correct");

	// inf - for the input
	// ouf - for the contestant output
	// ans - for the solution output
	// quitf(_ok, "The answer is correct.");
	// quitf(_wa, "The answer is wrong: expected = %d, found = %d", jans, pans);
    // quitf(_fail, "The answer is incorrect");
    // quitf(_pe, "Presentation error");
	// ensuref(bool condition, const char* message)

}