        switch (choice) {
            case 1: castVote(); break;
            case 2: showResults(); break;
            case 3: findWinner(); break;
            case 4:
                setColor(10);
                printf("\nThank you for using the Voting System!\n");
                break;
            default:
                setColor(12);
                printf("Invalid choice. Try again.\n");
        }
        setColor(7);
    } while (choice != 4);
}

int authenticateVoter(char id[]) {
    char enteredPassword[ID_LEN];

    for (int i = 0; i < voterCount; i++) {
        if (strcasecmp(voters[i].id, id) == 0) {
            if (voters[i].hasVoted)
                return -1;

            printf("Enter your password: ");
            fgets(enteredPassword, ID_LEN, stdin);
            enteredPassword[strcspn(enteredPassword, "\n")] = 0;

            if (strcmp(voters[i].password, enteredPassword) == 0) {
                voters[i].hasVoted = 1;
                return 1;
            } else {
                return -2;
            }
        }
    }
    return 0;
}
