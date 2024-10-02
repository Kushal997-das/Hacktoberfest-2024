                                                            #RANDOM PASSWORD GENERATOR
import random
import string

randomset=string.ascii_letters+string.digits
pass_len=0
password=""

print("WELCOME TO RANDOM PASSWORD GENERATOR\n\n Enter length of password required:\t")
pass_len=int(input(""))

for i in range(pass_len):
    password+=random.choice(randomset)

print("Your Randomly generated password is:\t",password)