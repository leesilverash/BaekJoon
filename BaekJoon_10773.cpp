#include <cstdio>
#include <stack>
//Stack
using namespace std;
int main()
{
    int n;
	int num;
	int sum = 0;
	stack<int> st;
 
	scanf("%d", &n);
 
	for (int i = 0; i < n; ++i) {
		scanf("%d",&num);
		if (num == 0) {
			st.pop();
		}
		else {
			st.push(num);
		}
	}
 
	for (int i = 0; !st.empty(); ++i) {
		sum += st.top();
		st.pop();
	}
 
    printf("%d", sum);
 
	return 0;
}