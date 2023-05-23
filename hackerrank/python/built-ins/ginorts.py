import string

if __name__ == "__main__":
	strin  = input()
	lowerC = []
	upperC = []
	oddD   = []
	evenD  = []
	for ch in strin:
		if ch in string.digits:
			if int(ch)%2==0:
				evenD.append(int(ch))
			else:
				oddD.append(int(ch))
		if ch in string.ascii_lowercase:
			lowerC.append(ch)
		if ch in string.ascii_uppercase:
			upperC.append(ch)
							 
	lowerC.sort()
	upperC.sort()
	oddD.sort()
	evenD.sort()
	oddD = [str(i) for i in oddD]
	evenD = [str(i) for i in evenD]                        
	final = lowerC + upperC + oddD + evenD
	print("".join(final))