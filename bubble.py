def bubblesort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1]=arr[j+1],arr[j]
    return arr

def display_top_scores(arr):
    sorted_array = bubblesort(arr)
    print("Top 5 scores: ")
    j=1
    for i in range(len(arr)-1,len(arr)-6,-1):
        print("{}. {:.2f}%".format(j,sorted_array[i]))
        j+=1

def main():
    while True:
        percentage=[]
        num = int(input("Enter size of array : "))
        if num<5:
            print("Size should be greater than or equal to 5")
        else:
            break
    for i in range(num):
        score = float(input("Enter the percentage for student {} ".format(i+1)))
        percentage.append(score)
    display_top_scores(percentage)

if __name__=="__main__":
    main()