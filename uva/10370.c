#include <stdio.h>

int main() {
    int testCase, students, i, studentsMarks, studentsMarksArray[1000], total, count;
    double average, answer;
    scanf("%d", &testCase);
    while (testCase--) {
        total = 0;
        count = 0;
        scanf("%d", &students);
        for (i = 0; i < students; ++i) {
            scanf("%d", &studentsMarks);
            studentsMarksArray[i] = studentsMarks;
            total += studentsMarks;
        }
        average = (total * 1.0) / students;

        for (i = 0; i < students; ++i) {
            if (studentsMarksArray[i] > average) {
                count++;
            }
        }

        answer = (count * 100 * 1.0) / students;
        printf("%.3f%%\n", answer);
    }
    return 0;
}
