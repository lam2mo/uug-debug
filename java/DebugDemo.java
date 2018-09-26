import java.io.*;
import java.util.*;

public class DebugDemo
{
    
    public static void sort(int nums[])
    {
        // WARNING: THERE ARE AT LEAST TWO BUGS IN THIS IMPLEMENTATION
        
        // insertion sort:
        //   i is the rightmost index of the sorted sublist
        //
        for (int i = 0; i < nums.length; i++) {
        
            // insert next item into sorted sublist
            //
            for (int j = i+1; j > 1 && nums[j-1] > nums[j]; j--) {
                int tmp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = tmp;
            }
        }
    }
    
    public static int sum(int nums[])
    {
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }
        return sum;
    }
    
    public static String str(int nums[])
    {
        StringBuilder s = new StringBuilder("");
        for (int i = 0; i < nums.length; i++) {
            s.append(nums[i]);
            s.append(" ");
        }
        return s.toString();
    }
    
    public static void main(String args[])
    {
        int data[] = {3, 1, 6, 4, 2};
        System.out.println(sum(data));
        System.out.println(str(data));
        sort(data);
        System.out.println(str(data));
    }
}