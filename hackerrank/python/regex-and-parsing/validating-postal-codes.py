import re
if __name__ == "__main__":
	P = input()
	regex_integer_in_range = r"^([0-9][0-9][0-9][0-9][0-9][0-9])$"	# Do not delete 'r'.
	regex_alternating_repetitive_digit_pair = r"(\d)(?=\d\1)"	# Do not delete 'r'.
	print(bool(re.match(regex_integer_in_range, P)) 
	and len(re.findall(regex_alternating_repetitive_digit_pair, P)) < 2)