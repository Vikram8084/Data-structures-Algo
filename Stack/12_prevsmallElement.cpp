#include <iostream>
using namespace std;
#include <vector>
#include <stack>

vector<int> prevSmallerElement(int* arr, int size, vector<int>& ans) {
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < size ; i++) {
        int curr = arr[i];

        while (st.top() >= curr) {
            st.pop();
        }

        ans[i] = st.top(); // Assign the value at the top of the stack to ans[i]

        st.push(curr);
    }

    return ans;
}

int main() {
    int arr[5] = {8, 4, 6, 2, 3};
    int size = 5;
    vector<int> ans(size);
    ans = prevSmallerElement(arr, size, ans);
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}