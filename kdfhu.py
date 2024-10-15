li = [1,3,9,10]
a = (x**2 for x in li)
print(a)
print(next(a),next(a))
lm=iter([2,3,4,5])
print(next(lm),next(lm))