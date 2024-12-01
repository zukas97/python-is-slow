def chain(x):
    a = x
    b = a
    c = b
    d = c
    e = d
    f = e
    g = f
    h = g
    i = h
    j = i
    k = j
    l = k
    m = l
    n = m
    o = n
    p = o
    q = p
    r = q
    s = r
    t = s
    u = t
    v = u
    w = v
    y = w
    z = y
    dx = z / 2.97982347239824359873265982374659832475684372566092035623949587645873458903245878932475984753428795
    mx = (dx / 0.21389789237) * 1.3246574657432654357435843423743764373457 
    x = mx
    return x
for i in range(50000):
    x = 1
    for i in range(10000):
        x += 1
        chain(x)
    for i in range(10000):
        x -= 1
        chain(x)
