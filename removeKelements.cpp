#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

string removeKdigits(string num, int k) {
    stack<char> st;

    for (char digit : num) {

        // Remove bigger digits from the stack
        while (!st.empty() && k > 0 && st.top() > digit) {
            st.pop();
            k--;
        }

        st.push(digit);
    }

    // If k is still left, remove digits from the end
    while (k > 0) {
        st.pop();
        k--;
    }

    // Build the answer
    string ans = "";

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    // Remove leading zeros
    int i = 0;
    while (i < ans.size() && ans[i] == '0') {
        i++;
    }

    ans = ans.substr(i);

    if (ans.empty())
        return "0";

    return ans;
}

int main() {
    string num;
    int k;

    cin >> num >> k;

    cout << removeKdigits(num, k);

    return 0;
}