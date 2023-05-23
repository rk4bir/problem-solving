def person_lister(f):
    def inner(people):
	# int(el[2]) is important because string sorting would give wrong output
	# as string have different sorting system
        return map(f, sorted(people, key=lambda el: int(el[2])))
    return inner


@person_lister
def name_format(person):
    return ("Mr. " if person[3] == "M" else "Ms. ") + person[0] + " " + person[1]


if __name__ == '__main__':
    people = [input().split() for i in range(int(input()))]
    print(*name_format(people), sep='\n')

