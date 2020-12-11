H, M = map(int, input().split())

angle=((11/2.0)*M)-(30*H)+360
if (angle<360-angle):
    print("{:.7f}".format(angle))
else:
    print("{:.7f}".format(360-angle))