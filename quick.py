def quicksort(arr):
    if(len(arr)<=1):
        return arr
    pivot=arr[len(arr)//2]
    left = [x for x in arr if x<pivot]
    middle = [x for x in arr if x==pivot]
    right = [x for x in arr if x>pivot]
    return quicksort(left)+middle+quicksort(right)

def display_top_scores(arr):
    sorted_array = quicksort(arr)
    print("Top 5 scores:")
    j=1
    for i in range(len(arr)-1, len(arr)-6, -1):
        print("{}. {:.2f}%".format(j,sorted_array[i]))
        j+=1

def main():
    percentage = []
    while True:
        n = int(input("Enter the size of array : "))
        if(n<5):
            print("Size should be greater than or equal to 5.")
        else:
            break
    for i in range(n):
        perc = float(input("Enter score % :"))
        percentage.append(perc)
    display_top_scores(percentage)

if __name__=="__main__":
    main()