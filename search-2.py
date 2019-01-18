#########################################################################
#    This program is to serch a list using linear and binary search     #
#    Author: Alka V N                                                   #
#    Last Modified : 17.10.2017                                         #
#########################################################################
while(1):
	print "		MENU\nChoose an option \n\t[1] Linear Search\n\t[2]Binary Search\n\t[3]Quit\n"
	ch=int(input("Enter your choice : "))
	if (ch==1):
		print"Enter a list : "
		arr=input()
		ele=(int(input("Enter item to be searched : ")))
		l=len(arr)
		for i in range(0,l):
			if(arr[i]==ele):
				print ele,"found at index ",i
				break
		else:
			print "Item not found"
	elif (ch==2):
		print"Enter a list : "
		a=input()
		ele=(int(input("Enter item to be searched : ")))
		n=len(a)
		a.sort()
		print "Sorted array: ",a
		start=0
		end=n-1
		flag=0
		while(start<=end):
			mid=(start+end)//2
			if(a[mid]==ele):
				print ele," found "
				flag=1
				break
			elif(a[mid]<ele):
				start=mid
			elif(a[mid]>ele):
				end=mid
		if(flag==0):
			print"item not found"
	elif (ch==3):
		break
	else:
		print"Invalid Choice!!!\nTry Again"
	
		
