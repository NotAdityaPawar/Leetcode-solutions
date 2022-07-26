Using the if else statement
​
```
select stock_name,
sum(if (operation='Buy',-1,1)*price) as capital_gain_loss
​
from stocks
group by stock_name
order by stock_name
```