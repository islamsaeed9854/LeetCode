public class Solution
{
    public static int[] memp = new int[55];
    int dp(int cur ,int n)
    {
        if (cur == n)
            return 1;
        if (cur > n)
            return 0;
        if (memp[cur] != -1)
            return memp[cur];
        int ret = 0;

        ret +=  dp(cur+1,n);
        ret += dp(cur + 2, n);
        return memp[cur] = ret;
    }
    public int ClimbStairs(int n)
    {
        Array.Fill(memp,-1);
        return dp(0, n);
    }
}