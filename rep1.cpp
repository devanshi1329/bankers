int main()
{
	printf("**************************************************************************************************************************************************************************************************************************************************************************************************************");
    printf("************************************************************************************************************************");
	printf("\n                                                                                              BANKER'S ALGORITHM");
	printf("\n                                                                                             --------------------\n");
	printf("\n**************************************************************************************************************************************************************************************************************************************************************************************************************");
    printf("************************************************************************************************************************");
	printf("\nEnter the total number of processes: ");
    scanf("%d",&pro);
 	for(i=0;i<pro;i++) 
	{
        run[i]=1;
        count++;
    }
 	printf("\nEnter the total number of resources: ");
    scanf("%d",&rsc);
    for(i=0;i<rsc;i++) 
	{ 
        printf("\nEnter the total instance for resource %d: ", k++);
        scanf("%d",&e[i]);
    }
    printf("\nEnter the maximum resource table:\n");
    for(i=0;i<pro;i++) 
	{
        for(j=0;j<rsc;j++) 
		{
            scanf("%d",&maxtab[i][j]);
        }
    }

 	printf("\nThe total instances of resources are: ");
    for(i=0;i<rsc;i++) 
	{
        printf("\t%d",e[i]);
    }

