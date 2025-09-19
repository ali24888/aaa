// Работа с массивами и стеком в C++
#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Массив
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Массив: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Стек
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Стек: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
