#include<iostream>
#include<stack>
#include<string>
 
using namespace std;
 
int main(void){
    int n;
    cout<< "입력받을 명령의 수를 입력하시오: ";
    cin >> n;
    
    stack<int> st; //int type의 stack 선언. 
    string str;
 
    for(int i=0; i<n; i++) {
        cout<< "명령을 입력하시오:" <<endl;
        cin >> str;
 
        if (str == "push") { //push 명령어 일때. 
 
            int num;
            cin >> num;
            st.push(num);
 
        } else if (str == "pop") {    //pop 명령어 일때. 
 
            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            } else {
                cout << "-1" << endl;
            }
 
        } else if (str == "size") {        //size 명령어 일때. 
 
            cout << st.size() << endl;
 
        } else if (str == "empty") {    //empty 명령어 일때. 
 
            if (st.empty()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
 
        } else if (str == "top") {        //top 명령어 일때. 
 
            if (!st.empty()) {
                cout << st.top() << endl;
            } else {
                cout << "-1" << endl;
            }
 
        }
 
    }
    return 0;
}
