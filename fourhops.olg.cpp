r1 onehop(@x,y,c) :- link(@x,y,c).
r2 twohops(@x,y,c) :- onehop(@x,z,c1), link(@z,y,c2), c:=c1+c2, c > 3.
r3 twohops(@x,y,c) :- link(@x,z,c1), onehop(@z,y,c2), c:=c1+c2.
r4 twohops1(@x,y,c) :- twohops(@x,y,c).
r5 threehops(@x,y,c) :- onehop(@x,z,c1), twohops(@z,y,c2), c:=c1+c2
r6 fourhops(@x,y,c) :- twohops1(@x,z,c1), twohops(@z,y,c2), c:=c1+c2
r7 fourhops(@x,y,c) :- onehop(@x,z,c1), threehops(@z,y,c2), c:=c1+c2.
