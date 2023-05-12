#include <iostream>

#include <vector>

#include <climits>

using namespace std;

void findMinAndMax(vector<int> const &nums, int low, int high, int &min, int

&max)

{

if (low == =high)

{

// common comparison

if (max < nums[low]) {

// comparison

max = nums[low];

}

if (min> nums[high]) {

// comparison 2

min = nums[high];

return;

}

if (high-low == 1)

// common comparison

{
if (nums[low] < nums[high])

// comparison 1

{

if (min> nums[low]) {

min = nums[low];

// comparison 2 MIRODA

supist sampoos bee hivi di gaien de lot &

if (max < nums[high]) {

max= nums[high];

// comparison 3

}

}

else {

if (min> nums[high]) {

minnums[high];

}

if (max < nums[low]) {

// comparison 3

max = nums[low];

}

// comparison 2

}

return;

}

int mid = (low + high)/2;

findMinAndMax(nums, low, mid, min, max);

findMinAndMax(nums, mid + 1, high, min, max);

}

int main()

{

vector<int> nums = {7, 2, 9, 3, 1, 6, 7, 8, 4};

int max = INT_MIN, min INT_MAX;
int n=nums.size();

findMinAndMax(nums, 0, n - 1, min, max);

cout <<"The minimum array element is "<< min << endl; cout <<"The maximum array element is

"<< max << endl;

return 0;

}

