n, k = map(int, input().split())

bookings = []
for i in range(n):
    a, d = map(int, input().split())
    bookings.append((a, 'a'))
    bookings.append((d, 'd'))

bookings.sort()

count = 0
for date, event in bookings:
    if event == 'a':
        count += 1
        if count > k:
            print('no')
            break
    else:
        count -= 1

if count <= k:
    print('yes')
