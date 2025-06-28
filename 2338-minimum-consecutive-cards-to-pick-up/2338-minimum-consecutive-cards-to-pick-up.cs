public class Solution {
    public int MinimumCardPickup(int[] cards)
{
    Dictionary<int,int>lv = new Dictionary<int,int>();
    int bestans = 100000000;
    for (int i = 0; i < cards.Length; i++)
    {
        if (lv.ContainsKey(cards[i]))
        {
            if (i - lv[cards[i]] < bestans)
            {
                bestans = i - lv[cards[i]];
            }
            lv[cards[i]]=i;
        }
        else lv.Add(cards[i], i);

    }
    if (bestans == 100000000) return -1;
    return bestans+1;
}
}