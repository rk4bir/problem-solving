class Person:
	
    def __init__(self, firstName, lastName, idNumber):
	self.firstName = firstName
	self.lastName = lastName
	self.idNumber = idNumber
	
    def printPerson(self):
	print("Name:", self.lastName + ",", self.firstName)
        print("ID:", self.idNumber)


class Student(Person):

    def __init__(self, firstName, lastName, idNumber, scores):
        Person.__init__(self, firstName, lastName, idNumber)
        self.scores = scores
    
    def calculate(self):
        score = sum(self.scores) / float(len(self.scores))
        res   = ''
        if 90 <= score <= 100:
            res = 'O'
        elif 80 <= score < 90:
            res = 'E'
        elif 70 <= score < 80:
            res = 'A'
        elif 55 <= score < 70:
            res = 'P'
        elif 40 <= score < 55:
            res = 'D'
        elif score < 40:
            res = 'T'
        return res


line = input().split()
