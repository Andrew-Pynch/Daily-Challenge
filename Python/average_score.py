if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores
    query_name = raw_input()

# Get the scores for the student in question
query_scores = list(student_marks[query_name])
# Initialize average
average = 0
# Loop over all scores for that student
# At each step, add current value to sum thusfar
for i in range(len(query_scores)):
    average += query_scores[i]

length = float(len(query_scores))
# Divide average by number of scores student has on record
average /= length
# Print average score to two decimals
print('%.2f' % average)