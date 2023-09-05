#include <stdio.h>

struct Date_Format {
    int Day;
    int Month;
    int Year;
};

void Input(struct Date_Format *Date);
void show(struct Date_Format *Date);
int Date_Compare(struct Date_Format A, struct Date_Format B);

int main() {
    struct Date_Format Date[3];
    for (int i = 0; i < 3; i++) {
        printf("\nDate No:%d\n", i + 1);
        Input(&Date[i]);
    }
    for (int j = 0; j < 3; j++) {
        printf("\nDate No:%d\n", j + 1);
        show(&Date[j]);
    }
    int A = Date_Compare(Date[0], Date[1]);
    if (A == -1) {
        printf("Date1 is Smaller than Date2");
    } else if (A == 1) {
        printf("Date1 is Bigger than Date2");
    } else {
        printf("Dates are Same");
    }
    return 0;
}

void Input(struct Date_Format *Date) {
    printf("\nDay:");
    scanf("%d", &(Date->Day));
    printf("\nMonth:");
    scanf("%d", &(Date->Month));
    printf("\nYear:");
    scanf("%d", &(Date->Year));
}

void show(struct Date_Format *Date) {
    printf("%d/%d/%d\n", Date->Day, Date->Month, Date->Year);
}

int Date_Compare(struct Date_Format A, struct Date_Format B) {
    if (A.Year > B.Year) {
        return 1;
    } else if (A.Year < B.Year) {
        return -1;
    } else if (A.Month > B.Month) {
        return 1;
    } else if (A.Month < B.Month) {
        return -1;
    } else if (A.Day > B.Day) {
        return 1;
    } else if (A.Day < B.Day) {
        return -1;
    }
    return 0;
}
