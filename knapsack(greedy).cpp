#include <iostream>
#define M 20

void quick(float ar[][4],int low, int high)
{	
	if(low<high)
	{
		int big=low,small=high-1,pivot=low;
		float temp0,temp1,temp2,temp3;

		while(big<small)
		{
			while(ar[big][3]<=ar[pivot][3] && big<high)
			big++;

			//FINDING A SMALLER ELEMENT IN RIGHT SIDE
			while(ar[small][3]>ar[pivot][3])
			small--;
	
	
			//SWAPPING BIGGER AND SMALLER ELEMENTS 
			//TO PUSH BIGGER TO RIGHT AND SMALLER TO LEFT
			if(big<small)
			{
				temp3=ar[small][3];
				temp2=ar[small][2];
				temp1=ar[small][1];
				temp0=ar[small][0];
				
				ar[small][3]=ar[big][3];
				ar[small][2]=ar[big][2];
				ar[small][1]=ar[big][1];
				ar[small][0]=ar[big][0];
				
				ar[big][3]=temp3;
				ar[big][2]=temp2;
				ar[big][1]=temp1;
				ar[big][0]=temp0;
			}
		}
		
		temp3=ar[small][3];
		temp2=ar[small][2];
		temp1=ar[small][1];
		temp0=ar[small][0];
	
		ar[small][3]=ar[pivot][3];
		ar[small][2]=ar[pivot][2];
		ar[small][1]=ar[pivot][1];
		ar[small][0]=ar[pivot][0];
	
		ar[pivot][3]=temp3;
		ar[pivot][2]=temp2;
		ar[pivot][1]=temp1;
		ar[pivot][0]=temp0;
		
		//RECURSIVE CALL
		quick(ar,low,small-1);
		quick(ar,small+1,high);
	}
}


int main()
{
	int i,j,n,c_max,c_cur;
	float item[M][4];
	
	std::cout<<"\n\tENTER NUMBER OF ITEMS : ";
	std::cin>>n;
	std::cout<<"\n\tENTER THE PROFIT AND CORRESPONDING WEIGHTS OF ITEMS : \n";
	for(i=0;i<n;i++)
	{
		std::cout<<"\nprofit for item "<<i<<" : ";
		std::cin>>item[i][1];
		std::cout<<"\nweight of item "<<i<<" : ";
		std::cin>>item[i][2];
		std::cout<<"\n";
		
		item[i][0]=i;
		//CALCULATING PROFIT PER UNIT WEIGHT OF EACH ELEMENT
		item[i][3]=item[i][1]/item[i][2];
	}
	std::cout<<"\n\nENTER CAPACITY OF SACK : ";
	std::cin>>c_max;
	c_cur=c_max;
	
	quick(item,0,n);
	
	std::cout<<"SORTED ITEM ARRAY IS : ";
	for(i=0;i<n;i++)
	{
		std::cout<<"\n"<<item[i][0]<<"\t"<<item[i][1]<<"\t"<<item[i][2]<<"\t"<<item[i][3];
	}
	
	i=0,j=n-1;
	float value,result[M][M];	//first column is item no., second column is weight taken of that item
	while(c_cur>0)
	{
		if(item[j][2]<c_cur)	//if weight of item < current capacity,then full weight is taken
		{
			result[i][0]=item[j][0];	//recording which item is taken
			result[i][1]=item[j][2];	//recording how much of it is taken
			
			c_cur=c_cur-item[j][2];
			
			value=value+item[j][1];		//
			
			i++;
			j--;
		}
		else	//last item, weight taken is equal to current capacity
		{
			result[i][0]=item[j][0];	
			result[i][1]=c_cur;
			
			value=value+(c_cur*item[j][3]);
			
			c_cur=0;
			
			i++;
		}
	}
	
	std::cout<<"\n\n\tITEMS TAKEN : \n";
	for(j=0;j<i;j++)
		std::cout<<"\nitem : "<<result[j][0]<<" weight : "<<result[j][1];
	
	std::cout<<"\n\n\tTOTAL VALUE : "<<value;
	
	return 0;
} 
