def evaluate_postfix(lis):
    operator = list()
    flag = True
    for i in lis:
        if (i.isnumeric()):
            operator.append(i)
        elif i in "({[":
            operator.append(i)
        elif i in ")}]":
            
            if operator[len(operator)-1] == i:
                operator.pop()
            else:
                flag = False
                return flag
    return flag
  

# A = "2,3,+,3,4,+,2,*,4,-"
A = "([])"
# A = A.split(",")
print(evaluate_postfix(A))

