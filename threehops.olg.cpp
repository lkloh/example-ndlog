materialize(even, infinity, infinity, keys(1,2)).
sp1 even(@n, 0).
sp2 odd(@n, y)
 :- even(@n, x), y==x+1.
sp3 even(@n, y)
 :- odd(@n, x), y==x+1.
