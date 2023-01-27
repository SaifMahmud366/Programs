nums=[]
n=int(input("Enter N = "))

print("Enter Values = ")
for i in range(n):
    ele=int(input())
    nums.append(ele)

for i in range(len(nums)):
    min_idx = i
    for j in range(i + 1, n):
        if nums[j] < nums[min_idx]:
            min_idx = j
    temp = nums[i]          #nums[i], nums[min_idx] = nums[min_idx], nums[i]
    nums[i] = nums[min_idx]
    nums[min_idx] = temp

print(nums)