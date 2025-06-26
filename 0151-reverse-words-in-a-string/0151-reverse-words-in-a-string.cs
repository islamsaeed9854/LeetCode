public class Solution {
    public string ReverseWords(string s)
 {
     string result = "";
     string[] arr = s.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
     for (int i = arr.Length - 1; i >= 0; i--)
     {
         result += arr[i];
           if(i!=0)
         result += " ";
     }
     return result;
 }
}