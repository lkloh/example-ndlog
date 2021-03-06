materialize(link,infinity,infinity,keys(1,2)).
materialize(twohops,infinity,infinity,keys(1,2)).
materialize(onehop,infinity,infinity,keys(1,2)).

r1 onehop(@Src, Dest, Cost) :-
	link(@Src, Dest, Cost), 
	Cost > 0.

r2 twohops(@Src, Mid, Cost) :-
	link(@Src, Mid, Cost1),
	onehop(@Mid, Dest, Cost2),
	Cost := Cost1 + Cost2.

r3 threehops(@Src, Dest, Cost) :-
	onehop(@Src, Mid, Cost1),
	twohops(@Mid, Dest, Cost2),
	Cost := Cost1 + Cost2.

r4 threehops(@Src, Dest, Cost) :-
	twohops(@Src, Mid, Cost1),
	onehop(@Mid, Dest, Cost2),
	Cost := Cost1 + Cost2.



