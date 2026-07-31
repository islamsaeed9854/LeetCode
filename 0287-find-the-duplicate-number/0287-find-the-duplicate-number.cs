public class Solution
{
    public int FindDuplicate(int[] nums)
    {
        int s = 0, f = 0;
        s = nums[0];
        f = nums[nums[0]];

        while (s != f)
        {
            s = nums[s];
            f = nums[nums[f]];
        }
        s = 0;
        while(s != f)
        {
            s = nums[s];
            f = nums[f];
        }
        return s;
    }
}