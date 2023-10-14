class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		// Your code goes here
		int torotise = nums[0];
		int hare = nums[0];
		do{
			torotise = nums[torotise];
			hare = nums[nums[hare]];
		}while(torotise != hare);
		torotise = nums[0];
		while(torotise!=hare){
			torotise = nums[torotise];
			hare = nums[hare];
		}
		return hare;
	}
};
