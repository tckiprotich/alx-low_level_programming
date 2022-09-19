#include "main.h"
/**
 * rev_string - reverses a string
 * @s: holi
 *
 */
<<<<<<< HEAD

void rev_string(char *s)
  
{
  
  int i;
  
  int j;
  
  int temp;
  
  int length;
  

  
  while (s[i] != 0)
    
    {
      
      i++;
      
    }
  

  
  length = i;
  
  i = 0;
  
  j = length - 1;
  

  
  while (i < j)
    
    {
      
      temp = s[i];
      
      s[i] = s[j];
      
      s[j] = temp;
      
      i++;
      
      j--;
      
    }
  
=======
void rev_string(char *s)
{
	int i;
	int j;
	int temp;
	int length;

	while (s[i] != 0)
	{
		i++;
	}

	length = i;
	i = 0;
	j = length - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
>>>>>>> 55c4bee72cfbb93be01c941bf01b2e39198b6c2b
}
