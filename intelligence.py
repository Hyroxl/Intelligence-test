from random import random
import string
name = input("whats your name?:")
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
    print("their score is " + str(randomnum))
    print(name + " is stupid")
