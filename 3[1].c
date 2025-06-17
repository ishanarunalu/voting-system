    if (voterCount < 1 || voterCount > MAX_VOTERS) {
        setColor(12);
        printf("Invalid number of voters.\n");
        exit(1);
    }

    for (int i = 0; i < voterCount; i++) {
        setColor(10); // Green
        printf("Enter Voter ID for voter %d: ", i + 1);
        fgets(voters[i].id, ID_LEN, stdin);
        voters[i].id[strcspn(voters[i].id, "\n")] = 0;

        printf("Set a password for %s: ", voters[i].id);
        fgets(voters[i].password, ID_LEN, stdin);
        voters[i].password[strcspn(voters[i].password, "\n")] = 0;

        voters[i].hasVoted = 0;
    }
    setColor(7);
}

void mainMenu() {
    int choice;
    do {
        setColor(11);
        printf("\n=====================================\n");
        printf("+         MAIN MENU                 +\n");
        printf("=====================================\n");
        setColor(14);
        printf("1. Vote\n");
        printf("2. Show Results\n");
        printf("3. Show Winner\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

