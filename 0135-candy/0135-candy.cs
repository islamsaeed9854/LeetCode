public class Solution {
    public int Candy(int[] ratings)
{
    int curr_min = 100000000;
    int count = 0;
    int[] arr = new int[ratings.Length];
    int[] arr2 = new int[ratings.Length];
    for (int i = 0; i < ratings.Length; i++)
    {
        if (ratings[i] > curr_min)
        {
           curr_min = ratings[i];
            count++;
            arr[i] = count;
        }
        else if(ratings[i] < curr_min)
        {
            curr_min = ratings[i];
            count = 1;
            arr[i] = count;
        }
        else
        {
             count = 1;
            arr[i] = 1;
        }
    }
    curr_min = 100000000;
    count = 0;
    int res = 0;
    for (int i = ratings.Length-1; i >=0; i--)
    {
        if (ratings[i] > curr_min)
        {
            curr_min = ratings[i];
            count++;
            arr2[i] = count;
        }
        else if (ratings[i] < curr_min)
        {
            curr_min = ratings[i];
            count = 1;
            arr2[i] = count;
        }
        else
        {
             count = 1;
            arr2[i] = 1;
        }
        res+= Math.Max(arr[i], arr2[i]);
    }
    return res;
}
}