struct Patient{
    int birthDate, birthYear;
    char birthMonth[255], name[255];
    Patient *next, *prev;
}*head, *curr, *tail;
int validationBirthMonth(char *month);