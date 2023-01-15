array = []
n = int(input("Enter N = "))

for i in range(5):
    element = int(input())
    array.append(element)

x = int(input("Enter A search element = "))

i = 0
while i<5:
    if (array[i] == x):
        print("Found at position No. ",i+1)
        break
    i+=1