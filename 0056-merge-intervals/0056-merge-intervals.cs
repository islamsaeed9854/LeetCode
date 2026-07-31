public class Solution
{
    public static int compare(int []a, int []b)
    {
        return a[0].CompareTo(b[0]);
    }
    public int[][] Merge(int[][] intervals)
    {
        if (intervals.Length == 1)
        {
            return intervals;
        }
        Array.Sort(intervals, compare);
        int cnt=  intervals.Length;
        int last = intervals[0][1];
        for (int i = 1; i < intervals.Length; i++)
        {
            if (intervals[i][1] <= last)
            {
                cnt--;
            }
            else if (intervals[i][0] <= last)
            {
                cnt--;
                last = intervals[i][1];
            }
            else
            {
                last = intervals[i][1];
            }
        }
        int [][] ret  = new int[cnt][];
        for (int i = 0; i < cnt; i++) {
            ret[i] = new int[2];
        }
        int p = 0;
        ret[p] = intervals[0];
        for (int i = 1; i < intervals.Length; i++)
        {
            if (intervals[i][1] <= ret[p][1])
            {
                
            }
            else if (intervals[i][0] <= ret[p][1])
            {
                ret[p][1] = intervals[i][1];
            }
            else
            {
                ret[++p][0] = intervals[i][0];
                ret[p][1] = intervals[i][1];
            }
        }
        return ret;

    }
}