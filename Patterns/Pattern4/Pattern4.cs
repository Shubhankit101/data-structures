using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
namespace Pattern {
  public class Program {
    private static void Print(int cnt) {
      // Print the row each time
      for (int j = 1; cnt >= j; j++) {
        Console.Write(cnt);
      }
      Console.WriteLine();
    }
    public static void Main(string[] args) {
      int n = Convert.ToInt32(Console.ReadLine());

      for (int i = 1; n >= i; i++) {
        Print(i);
      }
    }
  }
}
