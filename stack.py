
class Stack1:
    def __init__(self):
        self.ls=[]
        self.top=-1

    def push1(self,n):
        self.top=self.top+1
        self.ls.append(n)
    def pop1(self):
        if self.top==-1:
            print("Stack Empty")
        else:
            print(self.ls[self.top])
            self.top=self.top-1
    def size1(self):
        print(len(self.ls))
    def peak1(self):
        print(self.ls[self.top])
    def is_empty1(self):
        if len(self.ls)==0 or self.top==-1:
            print("Stack Empty")

obj = Stack1()
ch='Y'
val=0
while ch!='N':
    print("Enter the Chice")
    val=int(input())
    if val==1:
        print("Enter the value to push")
        num=input()
        obj.push1(num)
    elif val==2:
        obj.pop1()
    elif val==3:
        obj.size1()
    elif val==4:
        obj.peak1()
    elif val==5:
        obj.is_empty1()
    else:
        print("Invalid value")
        
    ch=input("Do you want to continue").upper()
