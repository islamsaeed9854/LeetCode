



select st.id , ( case when  st.id%2 = 0 then prev.student 
                   when  st.id%2 != 0 and (nxt.id) is not null then nxt.student
                   else  st.student end) as student 
from seat st
left outer join seat prev on prev.id = st.id - 1
left outer join seat nxt on nxt.id = st.id + 1
