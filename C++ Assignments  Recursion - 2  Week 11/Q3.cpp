#include<iostream>
#include<vector>
#include<string>
using namespace std;
string countAndSay(int n) {
    if (n == 1)
        return "1";

    string prevTerm = countAndSay(n - 1);
    string result = "";

    int count = 1;
    for (int i = 0; i < prevTerm.length(); ++i) {
        while (i < prevTerm.length() - 1 && prevTerm[i] == prevTerm[i + 1]) {
            count++;
            i++;
        }
        result += to_string(count)+prevTerm[i];
        count = 1;
    }

    return result;
}

int main() {
    int n = 4;
    cout <<countAndSay(n);

    return 0;
}
