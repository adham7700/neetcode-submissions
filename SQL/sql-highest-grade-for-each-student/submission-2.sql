SELECT e.student_id,min(e.exam_id)as exam_id,e.score
FROM exam_results e
where e.score=(
    select max(score)
    from exam_results
    where e.student_id=student_id
)
GROUP BY student_id,e.score
ORDER BY e.student_id;
