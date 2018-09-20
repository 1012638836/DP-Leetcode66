#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int len = digits.size() - 1;
		while (len >= 0 && digits[len] == 9)
		{
			digits[len] = 0;
			len--;
		}
		if (len >= 0) { digits[len] += 1; return digits; }
		else {
			digits[0] = 1;
			for (int i = 0; i < digits.size() - 1; i++)
			{
				digits[i + 1] = 0;
			}
			digits.push_back(0);
			return digits;
		}
	}
};
int main()
{
	Solution a;
	vector<int> input, out;
	input.push_back(9);
	input.push_back(9);
	input.push_back(9);
	out = a.plusOne(input);
	for (int i = 0; i < out.size(); i++)
	{
		cout << out[i] << " ";
	}
	getchar();
	return 0;
}