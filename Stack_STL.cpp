//STACK IMPLEMENTATION USING ARRAY 	
 	//Stack using STL- Standard Template Library

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int>st;
st.push(30);
st.push(20);
st.push(10);

    // Print the top element of the stack
cout<< "Top element of the stack: " <<st.top() <<endl;

    return 0;
}
