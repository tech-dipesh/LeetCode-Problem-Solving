-- Write your PostgreSQL query statement below
select s.user_id, round(avg(case when c.action = 'confirmed' then 1.0 else 0 end), 2) as confirmation_rate
from signups s left join confirmations c using (user_id) group by s.user_id;
