#include <stdio.h>
#include <string.h>
#define MAX_NUM 100

typedef struct {
    char name[30];
    char number[30];
}User;

void openFile(User *ptr, int *num);
void insert(User *ptr, int *num);
void deleted(User *ptr, int *num);
void search(User *ptr, int *num);
void printAll(User *ptr, int *num);
void saveFile(User *ptr, int *num);

int main()
{
    int n;
    User user[MAX_NUM];

    int person = 0;

    openFile(user, &person);

    while (1) {
        printf("***** Menu ***** \n");
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Search \n");
        printf("4. Print All \n");
        printf("5. Save and Exit \n");
        printf("Choose the item: ");
        scanf("%d", &n);

        if (n == 1) {
            printf("\n[INSERT] \n");
            insert(user, &person);
        }
        else if (n == 2) {
            printf("\n[Delete] \n");
            deleted(user, &person);
        }
        else if (n == 3) {
            printf("\n[Search] \n");
            search(user, &person);
        }
        else if (n == 4) {
            printf("\n[Print All] \n");
            printAll(user, &person);
        }
        else if (n == 5) {
            saveFile(user, &person);
            return 0;
        }
        else
            printf("\nError! ReTry! \n\n");
    }
    return 0;
}
void saveFile(User *ptr, int *num)
{
    if (*num > 0)
    {
        FILE *fp = fopen("UserInfo.txt", "w");

        if (fp == NULL)
        {
            printf("File Open Error !\n");
            return;
        }

        for (int i = 0; i < *num; i++)
        {
            fprintf(fp, "%s %s", ptr[i].name, ptr[i].number);
            fputc('\n', fp);
        }
        fclose(fp);

        printf("Data Save\n");
    }
    else
    {
        printf("Exit\n");
    }

}

void printAll(User *ptr, int *num)
{
    int i;

    if (*num > 0)
    {
        for (i = 0; i < *num; i++)
        {
            printf("Name: %s\n", ptr[i].name);
            printf("Tel: %s\n", ptr[i].number);
        }
        printf("Data Print\n\n");
    }
    else
        printf("No data\n\n");
}

void search(User *ptr, int *num)
{
    char name[30];

    if (*num > 0)
    {
        printf("Input Name: ");
        scanf("%s", name);
        for (int i = 0; i < MAX_NUM; i++)
        {
            if (strcmp(ptr[i].name, name) == 0)
            {
                printf("Name: %s\n", ptr[i].name);
                printf("Tel: %s\n", ptr[i].number);
                printf("Data Found \n\n");
                return;
            }
        }

        printf("Not Found \n\n");
    }
    else
    {
        printf("No data \n\n");
    }
}


void deleted(User *ptr, int *num)
{
    char name[30];
    int i, j;

    if (*num > 0)
    {
        printf("Input name: ");
        scanf("%s", name);

        for (i = 0; i < MAX_NUM; i++)
        {
            if (strcmp(name, ptr[i].name) == 0)
            {
                (*num)--;
                if (i != MAX_NUM - 1)
                {
                    for (j = i; j < MAX_NUM; j++)
                    {
                        strcpy(ptr[j].name, ptr[j + 1].name);
                        strcpy(ptr[j].number, ptr[j + 1].number);
                    }
                    *ptr[MAX_NUM - 1].name = NULL;
                    *ptr[MAX_NUM - 1].number = NULL;
                }
                else
                {
                    *ptr[MAX_NUM - 1].name = NULL;
                    *ptr[MAX_NUM - 1].number = NULL;
                }
            }
        }
    }
    else
    {
        printf("Not Found \n\n");
    }
}
void insert(User *ptr, int *num)
{
    if (*num < MAX_NUM)
    {
        printf("Input Name: ");
        scanf("%s", ptr[*num].name);
        printf("Input Tel Number: ");
        scanf("%s", ptr[*num].number);
        (*num)++;
        printf("Data Inserted \n\n");
    }
    else
    {
        printf("Data Full\n\n");
    }
}
void openFile(User *ptr, int *num)
{
    FILE *fp = fopen("UserInfo.txt", "r");

    if (fp == NULL)
    {
        printf("File open Error!\n");
        return;
    }
    while (1)
    {
        fscanf(fp, "%s %s", ptr[*num].name, ptr[*num].number);
        if (feof(fp) != 0)
            break;
        (*num)++;
    }
    fclose(fp);
}

#include <stdio.h>
#include <string.h>
#define MAX_NUM 100

typedef struct {
    char name[30];
    char number[30];
}User;

void openFile(User *ptr, int *num);
void insert(User *ptr, int *num);
void deleted(User *ptr, int *num);
void search(User *ptr, int *num);
void printAll(User *ptr, int *num);
void saveFile(User *ptr, int *num);

int main()
{
    int n;
    User user[MAX_NUM];

    int person = 0;

    openFile(user, &person);

    while (1) {
        printf("***** Menu ***** \n");
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Search \n");
        printf("4. Print All \n");
        printf("5. Save and Exit \n");
        printf("Choose the item: ");
        scanf("%d", &n);

        if (n == 1) {
            printf("\n[INSERT] \n");
            insert(user, &person);
        }
        else if (n == 2) {
            printf("\n[Delete] \n");
            deleted(user, &person);
        }
        else if (n == 3) {
            printf("\n[Search] \n");
            search(user, &person);
        }
        else if (n == 4) {
            printf("\n[Print All] \n");
            printAll(user, &person);
        }
        else if (n == 5) {
            saveFile(user, &person);
            return 0;
        }
        else
            printf("\nError! ReTry! \n\n");
    }
    return 0;
}

void saveFile(User *ptr, int *num)
{
    FILE *fp = fopen("UserInfo.txt", "w");

    if (fp == NULL)
    {
        printf("File Open Error !\n");
        return;
    }

    for (int i = 0; i < *num; i++)
    {
        fprintf(fp, "%s %s", ptr[i].name, ptr[i].number);
        fputc('\n', fp);
    }
    printf("Data Save\n");
    fclose(fp);
}

void printAll(User *ptr, int *num)
{
    if (*num > 0)
    {
        for (int i = 0; i < *num; i++)
        {
            printf("Name: %s\n", ptr[i].name);
            printf("Tel: %s\n", ptr[i].number);
        }
        printf("Data Print\n\n");
    }
    else
    {
        printf("No data\n\n");
    }
}

void search(User *ptr, int *num)
{
    char name[30];

    if (*num > 0)
    {
        printf("Input name: ");
        scanf("%s", name);

        for (int i = 0; i < *num; i++)
        {
            if (strcmp(name, ptr[i].name) == 0)
            {
                printf("Name: %s\n", ptr[i].name);
                printf("Number: %s\n", ptr[i].number);
                printf("Data Found \n\n");
                return;
            }
        }
        printf("Not Found \n\n");
    }
    else
    {
        printf("No data \n\n");
    }
}

void deleted(User *ptr, int *num)
{
    char name[30];
    int i, j;

    if (*num > 0)
    {
        printf("Name: ");
        scanf("%s", name);

        for (i = 0; i < MAX_NUM; i++)
        {
            if (strcmp(name, ptr[i].name) == 0)
            {
                if (i == MAX_NUM - 1)
                {
                    *ptr[i].name = NULL;
                    *ptr[i].number = NULL;
                }
                else
                {
                    for (j = i; j < MAX_NUM; j++)
                    {
                        strcpy(ptr[j].name, ptr[j + 1].name);
                        strcpy(ptr[j].number, ptr[j + 1].number);
                    }
                }
                (*num)--;
            }
        }
        *ptr[*num].name = NULL;
        *ptr[*num].number = NULL;
    }
    else
    {
        printf("No data\n\n");
    }
}


void openFile(User *ptr, int *num)
{
    FILE *fp = fopen("UserInfo.txt", "r");

    if (fp == NULL)
    {
        printf("File open Error!\n");
        return;
    }
    while (1)
    {
        fscanf(fp, "%s %s", ptr[*num].name, ptr[*num].number);
        if (feof(fp) != 0)//feof다음 (fp)넣는 거 굉장히 중요!
            break;
        (*num)++;
    }
    fclose(fp);
}

void insert(User *ptr, int *num)
{
    if (*num < MAX_NUM)
    {
        printf("Input Name: ");
        scanf("%s", ptr[*num].name);
        printf("Input Tel Number: ");
        scanf("%s", ptr[*num].number);
        (*num)++;
        printf("Data Inserted \n\n");
    }
    else
    {
        printf("Data Full\n\n");
    }
}
