int is_isogram(string str)
{
    int len = str.length();
 
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   
 
    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1])
            return 0;
    }
    return len;
}