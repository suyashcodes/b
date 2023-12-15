def get(size):
    marks = []
    for i in range(size):
        while True:
            temp = float(input("Enter the marks for student {} : ".format(i)))
            if(temp<0 and temp>100):
                print("Marks should not be greater than 100 or less than 0")
            else:
                marks.append(temp)
                break
    return marks

def highest(marks):
    max = marks[0]
    for i in range(len(marks)):
        if marks[i]>max:
            max=marks[i]
    return max

def lowest(marks):
    min = marks[0]
    for i in range(len(marks)):
        if marks[i]<min:
            min=marks[i]
    return min

def mark_with_highest_frequency(marks):
    cnttem = -1
    for i in range(len(marks)):
        cnt = -1
        for j in range(len(marks)):
            if(marks[j]==marks[i]):
                cnt+=1
        if cnttem<cnt:
            cnttem=cnt
    elem=marks[0]
    for i in range(len(marks)):
        cnt = -1
        for j in range(len(marks)):
            if(marks[j]==marks[i]):
                cnt+=1
        if cnt==cnttem:
            elem=marks[i]
    return elem

def avg(marks):
    return sum(marks)//len(marks)

def absentcount(marks):
    cnt=0
    for i in range(len(marks)):
        if marks[i]==0:
            cnt+=1
    return cnt

def main():
    num = int(input("Enter the total number of students : "))
    marks = get(num)
    print("The Average Marks are {:.2f}".format(avg(marks)))
    print("Highest score ", highest(marks))
    print("Lowest score ", lowest(marks))
    print("Total absent students ", absentcount(marks))
    print("Marks with highest frequency ", mark_with_highest_frequency(marks))

if __name__=="__main__":
    main()
