#ifndef _MEM_POOL_H
#define _MEM_POOL_H

	typedef void *MP_HANDLE;
	#define MEM_FAIL NULL


#ifdef __cplusplus
extern "C" {
#endif

    MP_HANDLE mem_create(unsigned int datasize, unsigned int poolsize);
	//input: datasize and poolsize
	//output:MEM_POOL���A��void���СA�p�G�^��NULL�N��create�����\�@
	void mem_destroy(MP_HANDLE mpool);
	//input: MEM_POOL���A��void����
	int mem_free(void *data);
	//input: �n�R����data���
	void *mem_alloc(MP_HANDLE mpool);
	//input: MEM_POOL���A��void����
	//output:void���A�����СA���V�@���j�p��datasize���i�ΪŶ��A�p�G�^��null�N��t�m�����\

	char *mem_geterrmsg(void);
	//���X���~�T��


#ifdef __cplusplus
}
#endif

#endif
