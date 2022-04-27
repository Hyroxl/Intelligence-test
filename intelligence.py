from random import random
import string
name = input("whats your name?:")
randomnum2 = int(random()* 5)
randomnum = int(random()* 101)
smart = "null"
if randomnum >= 50:
    smart = True
else:
    smart = False
if smart == True:
    print("their score is " + str(randomnum))
    print(name + " is smart")
if smart == False:
    if randomnum2 == 0:
        print("their score is " + str(randomnum))
        print(name + " is stupid")
    if randomnum2 == 1:
        print("their score is " + str(randomnum))
        print(name + " is maidenless")
    if randomnum2 == 2:
        print("their score is " + str(randomnum))
        print(name + " needs to touch grass")
    if randomnum2 ==3:
        print("their score is " + str(randomnum))
        print("your mom")
    if randomnum2 ==4:
        print("their score is " + str(randomnum))
        print(name + " is short")
