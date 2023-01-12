int binSubtracton(int a, int b)
{
      int carry;
      //get 2's compliment of b and add in a
      b = binAddition(~b, 1);

      while (b != 0) {
              //find carry and shift it left
              carry = (a & b) << 1;
              //find the sum
              a = a ^ b;
              b = carry;
      }
      return a;
}


