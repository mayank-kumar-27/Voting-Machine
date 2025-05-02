#include <stdio.h>
void Voting_Result(int count[])
{
    printf("\n*********************************************************************\n");
    printf("\n           --------------Voting Results--------------                \n");
    printf("\n*********************************************************************\n");
    printf("\nBJP: %d votes\nNCP: %d votes\nRJD: %d votes\nBSP: %d votes\nAAM: %d votes\nNOTA: %d votes\n", count[0], count[1], count[2], count[3], count[4], count[5]);
    int max = count[0];
    for (int i = 0; i < 6; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
    }
    printf("\n*********************************************************************\n");
    printf("\n             --------------Winner(s)--------------                   \n");
    printf("\n*********************************************************************\n");
    for (int i = 0; i < 6; i++)
    {
        if (count[i] == max)
        {
            switch (i)
            {
            case 0:
                printf("\nBJP (%d votes)\n", count[0]);
                break;
            case 1:
                printf("\nNCP (%d votes)\n", count[1]);
                break;
            case 2:
                printf("\nRJD (%d votes)\n", count[2]);
                break;
            case 3:
                printf("\nBSP (%d votes)\n", count[3]);
                break;
            case 4:
                printf("\nAAM (%d votes)\n", count[4]);
                break;
            case 5:
                printf("\nNOTA (%d votes)\n", count[5]);
                break;
            }
        }
    }
}
int main()
{
    printf("\n*********************************************************************\n");
    printf("\n          ------Welcome To Mayank's Voting Simulation!------         \n");
    printf("\n*********************************************************************\n");
    printf("\n-----Press enter to continue-----");
    getchar();
    int vote, pin, retry;
    int count[6] = {0, 0, 0, 0, 0, 0};
    do
    {
        printf("\nPlease cast your vote : \n");
        printf("1. BJP\n2. NCP\n3. RJD\n4. BSP\n5. AAM\n6. NOTA\n");
        printf("Choose your party : ");
        scanf("%d", &vote);
        switch (vote)
        {
        case 1:
            count[0]++;
            printf("\nThank You For cating your vote.\n");
            break;
        case 2:
            count[1]++;
            printf("\nThank You For cating your vote.\n");
            break;
        case 3:
            count[2]++;
            printf("\nThank You For cating your vote.\n");
            break;
        case 4:
            count[3]++;
            printf("\nThank You For cating your vote.\n");
            break;
        case 5:
            count[4]++;
            printf("\nThank You For cating your vote.\n");
            break;
        case 6:
            count[5]++;
            printf("\nThank You For cating your vote.\n");
            break;
        case 1234:
            printf("\nVoting Session has ended.\n");
            break;
        default:
            printf("\nInvalid choice. Please select a number between 1 and 6.\n");
        }
    } while (vote != 1234);
    printf("\n*********************************************************************\n");
    printf("\n           --------------Access control----------------              \n");
    printf("\n*********************************************************************\n");
    printf("\nPlease enter the security PIN to view the voting results: ");
    scanf("%d", &pin);
    if (pin == 5678)
    {
        Voting_Result(count);
    }
    else
    {
        printf("\nIncorrect PIN. A notification has been sent to the Voting Control Team.\n");
        printf("\nPlease enter the retry code to access the results: ");
        scanf("%d", &retry);
        if (retry == 2007)
        {
            Voting_Result(count);
        }
        else
        {
            printf("\nUnauthorized access attempt. All voting data has been erased.\n");
            for (int i = 0; i < 6; i++)
            {
                count[i] = 0;
            }
        }
    }
    return 0;
}