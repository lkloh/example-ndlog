materialize(link,infinity,infinity,keys(1,2)).
materialize(onehop,infinity,infinity,keys(1,2)).
materialize(twohops,infinity,infinity,keys(1,2)).

r1 onehop(@Src, Dest, Cost) :-
	link(@Src, Dest, Cost), 
	Cost > 0.

r2 twohops(@Src, Dest, Cost) :-
	link(@Src, Mid, Cost1),
	onehop(@Mid, Dest, Cost2),
	Cost := Cost1 + Cost2.



