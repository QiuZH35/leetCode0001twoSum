
#include <stdio.h>
#include <malloc.h>

//����֮�ͣ�����˼·
//����֮�ͣ��Ӽ���������ķ������в��ҡ�
//˫��бƣ���������ͬʱ��ʱ������������
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int* ans = (int*)malloc(2 * sizeof(int));
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			//��ǰ�������
			if (nums[i] + nums[j] == target)
			{
				ans[0] = i;
				ans[1] = j;
				*returnSize = 2;
				return ans;
			}
			//�Ӻ���ǰ����
			if (nums[numsSize - 1] + nums[numsSize - i - 2] == target)
			{
				ans[0] = numsSize-1;
				ans[1] = numsSize-i-2;
				*returnSize = 2;
				return ans;

			}

		}
		
	}
	*returnSize = 0;
	return ans;


}

void main()
{
	int arr[10] = { 3,61,7,8,51,45,12,6,34,81 };
	
	int size = 0;
	int *p=twoSum(arr, 10, 13, &size) ;

	printf("%d ,%d ",p[0],p[1]);

}