void rehash()
{
	int iodsise= maxSize;
	maxSize=2*maxSize;
	nade<T>** oldbucket=bucket;

	bucket= new node<T>*[maxSize];
	for (int i = 0; i < maxSize; i++)
	{
		bucket[i]=NULL;
	}
	curr 0;
	for (int i = 0; i < oldsize; i++)
	{
		node <T>*temp= oldbucket[i];
		while(temp!=NULL)
		{
			insert()
			// float rehash= (float)int/(float)int;


		}
	}
}

void erase(node* head)
{
	int idx = hashfun(key);
	node<T>* temp= bucket[idx];
	if (search(key)==NULL)
	{
		return;
	}
	if (temp->key==key)
	{
		node<T>* tobedelete->next = NULL;
		delete tobedelete;
		return;
	}while(temp->next->key!=key)
	{
		temp=temp->next;
	}
	node<>



}