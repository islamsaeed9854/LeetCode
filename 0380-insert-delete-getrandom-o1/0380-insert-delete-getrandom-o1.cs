public class RandomizedSet {

    List<int> list;
 public RandomizedSet()
 {
    list = new List<int>();
 }

 public bool Insert(int val)
 {
     if (list.Contains(val) == true)
     {
         return false;
     }
     else{
         list.Add(val);
         return true;
     }
 }

 public bool Remove(int val)
 {
     if (list.Contains(val) == true)
     {
         list.Remove(val);
         return true;
     }
     else
     {
         return false;
     }
 }

 public int GetRandom()
 {
     int size = list.Count;
     Random _random = new Random();
     int randomIndex = _random.Next(size);
     return list[randomIndex];

 }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.Insert(val);
 * bool param_2 = obj.Remove(val);
 * int param_3 = obj.GetRandom();
 */