#include <iostream>
#include <stack>
using namespace std;

int main() {
    int arr[] = {12,-3,6,-18,2};
    int n = 5;

    stack<int> st;

    for (int i = 0; i < n; i++) {

        bool destroyed = false;

        while (!st.empty() && st.top() > 0 && arr[i] < 0) {

            if (abs(st.top()) < abs(arr[i])) {
                st.pop();
            }
            else if (abs(st.top()) == abs(arr[i])) {
                st.pop();
                destroyed = true;
                break;
            }
            else {
                destroyed = true;
                break;
            }
        }

        if (!destroyed)
            st.push(arr[i]);
    }

    // Print answer
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}