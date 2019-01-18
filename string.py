"""############################################################"""
"""#this is a menudriven program                              #"""
"""#this program diplay all unique characers in a word and the#"""
"""#no of times it appeared in a string.And the  word that    #"""
"""#appear exactly twice in a given sentence                  #"""
"""#Author		: Sneha Kadangot                      #"""
"""#Last modified	:30.10.2017                           #"""                                         #"""
"""############################################################"""
loop=1
choice=0
while loop==1:
	print("\t\tMenu\n")
	print("1.To display the frequency of unique characters in word")
	print("2.To display the words that appear exactly twice in sentence")
	print("3.Quit")
	choice=input("Enter the choice:") 
	if(choice<1 or choice>3):
	print("Wrong choice...Retry")
	input("Press any key to continue...")
	elif(choice==1):
		words=raw_input("Enter a string:")
		x=dict()
		for word in words:
			c=0
			for i in words:
				if(word==i):
					c=c+1
			if(word not in x):
				x[word]=c
		print(x)
	elif(choice==2):
		sent=raw_input("Enter a sentence:")
        	y=[]
        	for word in sent.split():
			c=0
			for i in sent.split():
				if(word==i):
					c=c+1
			if(c==2):
				if word not in y:
					y.append(word)
		print "Words that appear exactly twice are:",y
	elif(choice==3):
		loop=0		
		





















