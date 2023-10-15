// 1. Two Sum
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
 {
    unordered_map<int, int> numToIndex; // ������������ ����� � �������� 

    for (int i = 0; i < nums.size(); ++i) 
	{
        int complement = target - nums[i];

        // ��������� ���������� complement � ����������
        if (numToIndex.find(complement) != numToIndex.end()) 
		{
            // ���������� ������� 2 ����� 
            return {numToIndex[complement], i};
        }

        // ��������� ������� ����� � ��� ������ � ���������
        numToIndex[nums[i]] = i;
    }

    // ���������� ������ ������ 
    return {};
}

int main()
 {
 	
 	setlocale(LC_ALL, "Russian");
 	
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (result.size() == 2) 
	{
        cout << "������� ���� ����� ������� � �����: " << target << ": " << result[0] << ", " << result[1] << endl;
    } 
	else
	{
        cout << "��� �������." << endl;
    }

    return 0;
}
