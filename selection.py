# selection sort
def selectionSort(arr):
    n = len(arr)
    for i in range(n):
        min=i
        for j in range(i+1,n):
            if(arr[j]<arr[min]):
                min=j
        arr[i],arr[min]=arr[min],arr[i]
    return arr

def display_top_scores(arr):
    ar = selectionSort(arr)
    print("Top 5 scores are: ")
    j=1
    for i in range(len(arr)-1,len(arr)-6,-1):
        print(f"{j}. {ar[i]}")
        j+=1

def main():
    while True:
        percentage=[]
        num = int(input('Enter the number of students: '))
        if num<5:
            print('The program requires at least 5 students')
        else:
            break
    for i in range(num):
        perc = float(input("Enter score {}: ".format(i + 1)))
        percentage.append(perc)
    display_top_scores(percentage)

if __name__=="__main__":
    main()
