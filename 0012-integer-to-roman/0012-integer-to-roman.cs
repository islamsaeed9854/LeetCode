public class Solution {
     string solve(string symbol,int num)
 {
     string res = "";
     if (num == 9)
     {
         res += symbol[0];
         res += symbol[2];
     }
     else if(num==4)
     {
         res += symbol[0];
         res += symbol[1];
     }
     else if(num == 5)
     {
         res += symbol[1];
     }
     else if(num <=3)
     {
         for(int i = 0;i < num; i++)
         {
             res += symbol[0];
         }
     }
     else if(num > 5)
     {
         res += symbol[1];
         for(int i = 6; i<= num; i++)
         {
             res += symbol[0];
         }
     }
     return res;
 }
 public string IntToRoman(int num)
 {
     string res = "";
     string temp = Convert.ToString(num);
     for(int i = 0; i< temp.Length; i++)
     {
         if (temp.Length-i == 4)
         {
             for(int j = 0;j < Convert.ToInt32(temp.Substring(0, 1)); j++)
             {
                 res += "M";
             }
         }
         if (temp.Length - i == 3)
         {
             res += solve("CDM", Convert.ToInt32(temp.Substring(i, 1)));
         }
         if (temp.Length - i == 2)
         {
             res += solve("XLC", Convert.ToInt32(temp.Substring(i, 1)));
         }
         if (temp.Length - i == 1)
         {
             res += solve("IVX", Convert.ToInt32(temp.Substring(i, 1)));
         }
     }
     return res;
 }
}
