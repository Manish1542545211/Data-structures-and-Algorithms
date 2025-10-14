mystring=input("Enter a string")
def dummy(a):
    return a in "aeiouAEIOU"

filtering=list(filter(dummy,mystring))
print(filtering)