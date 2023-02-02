#include <stdio.h>
int points = 0;
bool victory(int need) {
    if (need == points) return true;
    else return false;
}
void message() {
    int answer;
    scanf("%d", &answer);
    if (answer == 10) {
        points++;
        printf("Верно!\n");
    }
    else printf("Ошибка\n");
}
void primer(int i) {
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int b[10] = { 9,8,7,6,5,4,3,2,1,0 };
    printf("%d + %d = ", a[i], b[i]);
    message();

}
int main() {
    printf("Сколько очков для завершения тренировки?");
    int need;
    scanf("%d", &need);
    int attemps = 0;
    for (int i = 0; points != need; i++) {
        attemps++;
        primer(i);
        victory(need);
    }
    printf("Тренировка завершена!\nВерных ответов %d из %d", points, attemps);

}