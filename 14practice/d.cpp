#include <iostream>
using namespace std;

int main() {
  string word;
  string secret;
  cin >> word >> secret;
  int secretSize = secret.size();
  for(int i = 0; i < word.size() - secretSize; i++) {
    secret += secret[i % secretSize];
  }

  for(int i = 0; i < word.size(); i++) {
    int index = word[i] - 'a';
    // (secret[i] - 'a') Makes the letter from secret to be in range [0, 25], because we have 26 letters in the alphabet. For example, 'a' will be 0, 'b' will be 1, 'z' will be 25

    // (secret[i] - 'a' + index) Makes the letter from secret to shift for index positions.
    // For example, word = flower, secret = dog. Considering the first letter f, the index will be 5, because f - 'a' = 5. The first letter of secret is d, so d - 'a' = 3. The letter f will be shifted for 3 positions (f -> g -> h -> i) and the result will be i

    // (secret[i] - 'a' + index) % 26 Make sure, that the letter will be in range [0, 25]. For example, if the letter is z, the index will be 25, if we try to shift it for index numbers, it will go beyond the letters range, so we need to make sure that the letter will be in range [0, 25]. For example, word = zod, secret = zig, so z - 'a' = 25, 25 + 25 = 50, 50 % 26 = 24, so the letter will be shifted for 24 positions, which is correct

    // And as the last one, we add 'a' back, because right now, we are in range of [0, 25], the letters start at 97, which is 'a', so we need to add 'a' back to get the correct letter
    // For example, we get 0, we add 'a' back, so we get 'a', we get 25, we add 'a' back, so we get 'z'
    char letter = (secret[i] - 'a' + index) % 26 + 'a';
    cout << letter;
  }
  return 0;
}