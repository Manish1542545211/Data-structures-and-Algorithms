from functools import reduce
mylist=[1,2,3,4]
def dummy(a,b):
    return a*b

reducevalue=reduce(dummy,mylist)
print(reducevalue)