total=0
count=0
while True:
    marks=int(input())
    total=total+marks
    count=count+1
    choice=input().lower()
    if choice == "n":
        break
if count>0:
    average=total/count
    print(int(average))
else:
    print("no value entered")