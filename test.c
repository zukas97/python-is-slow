#include <stdio.h>

#define MAIN_RANGE 50000
#define ADD_RANGE 10000

void chain(float x) {
	float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, y, z, dx, mx;
	a = x;
	b = a;
	c = b;
	d = c;
	e = d;
	f = e;
	g = f;
	h = g;
	i = h;
	j = i;
	k = j;
	l = k;
	m = l;
	n = m;
	o = n;
	p = o;
	q = p;
	r = q;
	s = r;
	t = s;
	u = t;
	v = u;
	w = v;
	y = w;
	z = y;
	dx = z / 2.97982347239824359873265982374659832475684372566092035623949587645873458903245878932475984753428795;
	mx = (dx / 0.21389789237) * 1.3246574657432654357435843423743764373457;
	x = mx;

}
int main() {
	float x = 0;
	for (int i=0; i < MAIN_RANGE; i++) {
		for (int i=0; i < ADD_RANGE; i++) {
			x++;
			chain(x);
		}
		for (int i=0; i> ADD_RANGE; i++) {
			x--;
			chain(x);
		}

	}
}
