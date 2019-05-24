#include <iostream>
/*  For k = 1, 3, 7, 13, 18, what is this set in F 19 ?
{k ⋅ 0, k ⋅ 1, k ⋅ 2, k ⋅ 3, ... k ⋅ 18}
Do you notice anything about these sets?  */
using namespace std;

int main()
{
  


	int data[] = {1, 3, 7, 13, 18};
	int prime = 19;

	for (int i = 0; i < sizeof(data) / sizeof(*data); i++) {
		cout << "[";
		for (int j = 0; j < 19; j++) {
			int ans = (data[i] * j) % prime;
			
			if (j != 18)
				cout << ans << ", ";
			else
				cout << ans;
		}
		cout << "]"<< endl;
	}
    
    return 0;
}

// for (int i = 0; i < sizeof(data) / sizeof(*data); i++)