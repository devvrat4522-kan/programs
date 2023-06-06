# import csv
# user=[{"name":"devvrat","username":"dev","department":"it infrastructure"},{"name":"adarsh","username":"addi","department":"Network security"}]
# keys=["name","username","department"]
# with open('depart.csv','w') as dt:
#     writer=csv.DictWriter(dt,fieldnames=keys,dialect='unix')
#     writer.writeheader()
#     writer.writerows(user)

# num=[1,2,3,4,5,6,7]
# for i in range(len(num)):
#     if(num[i]%2==0):
#         temp=num[i]
#         num[i]=num[i-1]
#         num[i-1]=temp
# print(num)

# num1=[1,2,3,4,5,6,7,8]
# temp=[]
# temp=num1[::2]
# print(temp)
# num1[1::2]=num1[::2]
# num1[::2]=temp
# print(temp)

# import re
# log = " July bjhvbd gfydeufg oiwi 30:45:56 {123456789A10} fgduygb [123456] : ERROR PREVENTION "
# regx=r"\[(\d+)\]"
# result=re.search(regx,log)
# print(result[1])
# #print(result[2])

# list=[1,2,3,4,5]
# print([item+1  for item in list if item<4 ]) #list comprehension [operation iteration condition]

# import math as m
# list1=[1,2,100,20,30,40,50]
# l=[item*item if item<35 else item for item in list1 ] #[operation if condition else operation iteration]
# l.sort()
# print(l)

# def sqrt(a):
#     return a**0.5
# l=[1,2,3,4,5]
# print(list(map(sqrt,l)))

# from  functools import reduce
# def add(a,b):
#     return a+b
# print(reduce(add,l)) #reduce function

# a=('hello',[2],'ufdgdbj',[4])
# print(a)
# d={'dev':123,'hello':456}
# # print(d)
# A={}
# print(d.keys())
# print(d.get(1))
# print(A['dev'])
# for item,items in zip(a[::2],a[1::2]):  #converting tuple to dictionary
#     A[item]=items
# print(A)

# dict={'java':[4,'addi'],'Python':[5,'Dev'],'ML':[4.5,'Chitti']}
# print(dict)
# for i in dict:
#     nm=input("enter the name")
#     rate=float(input("enter the rating"))
#     sd=dict.get(i)  #return the value specified with the key
#     sd[1]=nm       
#     sd[0]=rate
# for i in dict.values():    #iterating through the vales
#     nm=input("enter the name")
#     i[1]=nm
# print(dict)
# x={'java':[3,'goat',],'Python':[4,'jhonny'],'ML':[3.5,'cloyie']}
# for i in dict.keys():
#     dict[i][1]=x[i][1]       
#     dict[i][0]=(dict[i][0]+x[i][0])/2
# print(dict)

# list= (1,2,3,4,6,[4,5,6,7])
# list[5]=9
# print(list)

dict1={'fooding':['burger','biryani'],'apperals':['Jeans','T-shirt'],'electronic':['Laptop','Tablets']}
for k,v in zip(dict1.keys(),dict1.values()):
    print(k)
    print(v)
