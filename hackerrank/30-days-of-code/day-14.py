class Difference:
    def __init__(self, a):
        self.__elements = a

	# Add your code here
    def computeDifference(self):
        from itertools import combinations as comb
        combs = list(comb([i for i in range(len(self.__elements))], 2))
        self.differences = []
        for c in combs:
            tmp = self.__elements[c[0]] - self.__elements[c[1]]
            if tmp < 0:
                tmp = tmp*(-1)
            self.differences.append(tmp)
    @property
    def maximumDifference(self):
        return max(self.differences)
# End of Difference class


_ = input()
a = [int(e) for e in input().split(' ')]
d = Difference(a)
d.computeDifference()
print(d.maximumDifference)
