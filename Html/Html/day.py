
def countCharacters(string):
  # Write your code here
    for i in range(t):
        vowel=0
        consonant=0
        digit=0
        vowel=0
        vowelDataset="aeiouAEIOU"
        for char in string:
            if(char.isalpha()):
                if(char in vowelDataset):
                    vowel=vowel+1
                else:
                    consonant=consonant+1
            else:
                digit=digit+1
        print(vowel)
        print(consonant)
        print(digit)