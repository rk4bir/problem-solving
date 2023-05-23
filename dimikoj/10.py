t = int(input())
for i in range(t):
	target, score, ball_left = map(int, input().split())
	target += 1
	ball_played = 300 - ball_left
	need = target - score
	cr = (score/float(ball_played)) * 6.00
	rr = (need/float(ball_left)) * 6.00
	print("%0.2f %0.2f"%(cr, rr))
