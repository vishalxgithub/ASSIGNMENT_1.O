#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

///////////////////////////////main code//////////////////////////

string appendAndDelete(string s, string t, int k) {
    string ans = "No";
    while(k>0){
        if(s.size() > t.size()){
            if(!s.empty())
                s.pop_back();
        }
        else{
            if(!s.empty())
                t.pop_back();
        }
        k--;
    }
    if(s == t){
            ans = "Yes";
            return ans;
        }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
