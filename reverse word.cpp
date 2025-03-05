// Recursive function to reverse a string
#include <iostream>
#include <string>

using namespace std;

// Recursive function to reverse a string
void reverse_String(text, int start, int end) {
  // Base case: when start >= end, the string is fully reversed
  if (start >= end)
    return;
    
  // Swap characters at start and end indices
  swap(text[start], text[end]);

  // Recursive case: move to the next pair of characters
  reverse_String(text, start + 1, end - 1);
}

int main() {
  string text;
  cout << "Input a string: "; cin>>text;

  // Reverse the string using recursion
  reverse_String(text, 0, text.length() - 1);

  cout << "Reversed string: " << text << endl;

  return 0;
}
