# Simple-airline-priority-system

I design a very simplistic software that selects the next passenger on an airline waiting list when a seat become available.

1. Based on the given rules, I inserted an individual nearer to the top (head) location based on a derived score from connecting flight status, club priority and fare.
	-->Customers with connecting flights have first priority
	-->Platinum customers have second priority
	-->Gold customers have third priority
	-->Silver customers have fourth priority
	-->Airline club members have fifth priority
	-->Airline frequent flyers have sixth priority
	-->Everyone else has last priority

2. I categorise the connecting flight status and club priority status with the following scores
	-->1-Connect:Platinum; 2-Connect:Gold; 3-Connect:Silver; 4-Connect:Airline club members; 5-Connect:Airline frequent flyers; 6-Connect:No classifcation 
    -->7-NoConnect:Platinum; 8-NoConnect:Gold; 9-NoConnect:Silver; 10-NoConnect:Airline club members; 11-NoConnect:Airline frequent flyers; 12-NoConnect:No classifcation 
3. The formula to derive the priority score is as follows: (Associated points in 2nd para) + 1/(fare price). I use a reciprocal of fare price for second part of the formula. Hence, a larger fare price paid would result in a smaller score, which will propel the individual closer to the top of the queue.
4. In addition, I also place a small penalty for an individual who queued late. To illustrate, out of 2 individuals who paid for the same fare price, same connecting flight and club priority statuses, the person who queued earlier would be given a priority over an individual who queued later.


