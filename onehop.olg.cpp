materialize(link,infinity,infinity,keys(1,2)).
materialize(onehop,infinity,infinity,keys(1,2)).

r1 onehop(@Src, Dest, Cost) :-
	link(@Src, Dest, Cost), 
	Cost > 0.
