while(procount!=0) 
	{
        safestate=0;
        for(i=0;i<pro;i++) 
		{
            if (runpro[i]) 
			{
                execute=1;
                for(j=0;j<rsc;j++) 
				{
                    if( (maxtab[i][j]-alloctab[i][j]) > avail[j]) 
					{
                        execute=0;
                        break;
                    }
                }
                if(execute)
				 {
                    printf("\n\nProcess %d is executing.",i+1);
                    runpro[i]=0;
                    procount--;
                    safestate=1;
                    for(j=0;j<rsc;j++) 
					{
                      avail[j]+=alloctab[i][j];
                    }
                    break;
                }
            }
        }
