if (!safestate) 
		{
            printf("\n\tThe processes are in unsafe state.\n\n");
            break;
        }
		else 
		{
            printf("\n\tSafe sequence is: ");
            for(i=0;i<rsc;i++) 
			{
                printf("\t%d",avail[i]);
            }
            printf("\n\tThe process is in safe state.\n\n");
        }
    }
