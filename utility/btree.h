#ifndef _BALANCE_TREE_H
#define _BALANCE_TREE_H

	typedef void *BT_HANDLE;
	#define BTREE_FAIL NULL


#ifdef __cplusplus
extern "C" {
#endif

	BT_HANDLE btree_create(int (*comp)(void *data, void *node_data), void *(*data_init)(void), int (*data_copy)(void *src, void *dest), void (*data_clear)(void *data));
	//��J:�����function:comp�P��ưt�m��function�A�Ъ`�N�����fuction������ƶ��ǡA
    //��ƪ�l�ƪ�function�A
    //�ƻs��function�A�Ъ`�N�Ĥ@�ӰѼƬ��ӷ��A�ĤG�Ӭ��ؼСA 
    //�M��(����)��function�C 
	//��X:BALANCE_TREE���A��void���СA�����\�h�^��NULL�A��btree_geterrmsg()���o���~�T��
	
	void btree_destroy(BT_HANDLE btree);
    //��J:BALANCE_TREE���A��void���Ц�} 
	
	void* btree_search(BT_HANDLE btree, void *data);
	//��J:BALANCE_TREE���A��void���лPBALANCE_TREE_NODE��data������
	//��X:BALANCE_TREE_NODE��data�����СA�S���h�^��NULL�A��btree_geterrmsg()���o���~�T��
	
	int btree_insert(BT_HANDLE btree, void *data);
	//��J:BALANCE_TREE���A��void���лPBALANCE_TREE_NODE��data������
	//��X:0--�������J���ʧ@�A1--��btree_geterrmsg()���o���~�T��
	
	int btree_delete(BT_HANDLE btree, void *data);
	//��J:BALANCE_TREE���A��void���лPBALANCE_TREE_NODE��data������
	//��X:�^�ǳQ�R������ƫ��СA��^��NULL�ɡA��btree_geterrmsg()���o���~�T��

	int btree_iter_create(BT_HANDLE btree);
	//��J:BALANCE_TREE���A��void����
	//���N�����|�H��insert��delete��s�Acreate��U���e�Y�����N�������e�A�i�H���screate�ӧ�s 
	
	void *btree_iter_get(BT_HANDLE btree);
	//�q���N�������X��� 
	
	void btree_iter_end(BT_HANDLE btree);
    //�������N���A�|����Ҧ��Ȧs�b���N������� 

	char *btree_geterrmsg(void);
	//���o���~�T��

#ifdef __cplusplus
}
#endif

#endif
