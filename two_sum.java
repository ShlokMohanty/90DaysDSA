import java.util.Hashmap;
class Solution{
  public int[] twosum (int[] nums, int tar){
    int[] result = new int[2];
    if (nums.length == 0){
      return result;
    }
    Hashmap<Integer, Integer> hm = new Hashmap();
    for(int i=0;i<nums.length;i++){
      int diff = target - nums[i];
      if(hm.containsKey(diff))
      {
        result[0] = i;
        result[1 = hm.get(diff);
        return result;
      }
      else {
        hm.put(nums[i], i);
      }
      return result;
    }
  }
}
