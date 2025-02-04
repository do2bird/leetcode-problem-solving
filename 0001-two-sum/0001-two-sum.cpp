class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;

		for (int first = 0; first < nums.size(); first++)
		{
			for (int second = first + 1; second < nums.size(); second++)
			{
				if (target == nums.at(first) + nums.at(second))
				{
					result.push_back(first);
					result.push_back(second);

					return result;
				}
			}
		}

		return result;
	}
};