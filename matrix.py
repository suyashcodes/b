def add(m1,m2):
    result = [
        [m1[i][j]+m2[i][j] for j in range(len(m1[0]))]
        for i in range(len(m1))
    ]
    return result

def sub(m1,m2):
    result = [
        [m1[i][j]-m2[i][j] for j in range(len(m1[0]))]
        for i in range(len(m1))
    ]
    return result

def mul(m1,m2):
    result = [
        [sum(m1[i][k]*m2[k][j] for k in range(len(m2[0])))
         for j in range(len(m2[0]))]
        for i in range(len(m1))
    ]
    return result

def trans(m):
    result=[
        [m[j][i] for j in range(len(m))]
        for i in range(len(m))
    ]
    return result

def main():
    m1 = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    m2 = [
        [9, 8, 7],
        [6, 5, 4],
        [3, 2, 1]
    ]

    add1 = add(m1,m2)
    sub1 = sub(m1,m2)
    mul1 = mul(m1,m2)
    trans1 = trans(m1)
    print(add1)
    print(sub1)
    print(mul1)
    print(trans1)

if __name__=="__main__":
    main()