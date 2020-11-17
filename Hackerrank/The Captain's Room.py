K = int(input())
rooms = input().split()

rooms.sort()
capt_room = (set(rooms[0::2]) ^ set(rooms[1::2]))
print(capt_room.pop())
