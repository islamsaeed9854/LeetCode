public class Solution {
   public string ReverseWords(string s)
 {
     StringBuilder result =new StringBuilder();
     string[] arr = s.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
     for (int i = arr.Length - 1; i >= 0; i--)
     {
         result.Append(arr[i]);
         if (i != 0)
             result.Append(" ");
     }
     return result.ToString();
 }
}