#include <stdio.h>
int main()
{
    int lan, rech, choice;
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &lan);

    switch (lan)
    {
    case 1:
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for  Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice: ");
        scanf("%d", &rech);
        switch (rech)
        {
        case 1:
            printf("You have successfully done Internet Recharge.");
            break;
        case 2:
            printf("You Have Successfully done Top-up Rechaarge");
            break;
        case 3:
            printf("You Have Successfully done Special Rechaarge");
            break;
        default:
            printf("Invailid");
            break;
        }
        break;
        // hindi
    case 2:
        printf("Internet Recharge ke liye 1 dabaiyee\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        printf("Enter your choice: ");
        scanf("%d", &rech);
        switch (rech)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.");
            break;
        case 2:
            printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
            break;
        case 3:
            printf("Aapne safaltapurvak Special Recharge kar liya he.");
            break;
        default:
            printf("Invailid");
            break;
        }
        break;

        // gujrati
        case 3:
        printf("Internet Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Special Recharge mate 3 dabavo\n");
        printf("Enter your choice: ");
        scanf("%d", &rech);
        switch (rech)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu chhe");
            break;
        case 2:
            printf("Tame safaltapurvak Top-up Recharge karyu chhe");
            break;
        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe");
            break;
        default:
            printf("Invailid");
            break;
        }
        break;

    default:
        printf("you not choose language");
        break;
    }
}