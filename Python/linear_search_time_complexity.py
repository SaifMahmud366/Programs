nums=[]
n=int(input("Enter N = "))

print("Enter Values = ")
for i in range(n):
    ele=int(input())
    nums.append(ele)

x = int(input("Enter Value = "))
for i in range(n):
    if (x==nums[i]):
        print("Found at position No. ",i+1)
        break
else:
    print("Not Found")