/*section, key, value���j�p�����p��128 bit(�]�t�����Ÿ�'\0')�B�e�ᤣ��Ospace�A
 *�����\�r�������Ů�(�Ů�H�~��space�O���Q���\��)�C
 *
 */
#ifndef _INI_H
#define _INI_H
    
	typedef void *INI_HANDLE;
	#define INI_FAIL NULL

#ifdef __cplusplus
extern "C" {
#endif

	INI_HANDLE ini_open(char *filename);
	//�}�Ҥ@��ini���ɮסA��J�ɮצW�١A��X��ini��handle�C
	//�p�G�^�Ǭ�NULL�ɡA�N��}�Ҥ����\�C

	int ini_close(INI_HANDLE ini_file);
	//�g�J(��s)�������w�}�Ҫ�ini�A��Jini��handle�C
	//���\�ɡA�^��0�A�Y�����\�h�^��1�ëO�d��l�ɮסC

	int ini_close2(INI_HANDLE ini_file);
	//�����w�}�Ҫ�ini(���i��g�J���ʧ@)�A��Jini��handle�C
	//���\�ɡA�^��0�A�Y�����\�h�^��1�C

	int ini_commit(INI_HANDLE ini_file);
	//�g�J(��s)�w�}�Ҫ�ini(���i���������ʧ@)�A��Jini��handle�C
	//���\�ɡA�^��0�A�Y�����\�h�^��1�ëO�d��l�ɮסC

	int ini_add_section(INI_HANDLE ini_file, char *section);
	//�[�J�@��section�A��Jini��handle�Psection�W�١C
	//���\�ɡA�^��0�A�Y�����\�h�^��1�C

	int ini_add_key(INI_HANDLE ini_file, char *section, char *key, char *val);
	//�[�J�@��key�A�p�G�S�����section�h�|���[�J�s��section�A�N�s��key�[�J�A
	//�p�Gkey���W�٬ۦP�A�h�|��sval���ȡC
	//��Jini��handle�Psection�Akey�Aval����ơC
	//���\�ɡA�^��0�A�Y�����\�h�^��1�C

	char *ini_get_key(INI_HANDLE ini_file, char *section, char *key, char* valbuf);
	//���o�@��key��val�A��Jini��handle�Bsection�Bkey�P�s���쪺val��buffer����ơC
	//valbuf�������j�A�Y�^��NULL�N��S�����C

	int *ini_get_key_int(INI_HANDLE ini_file, char *section, char *key, int* valbuf);
	unsigned long *ini_get_key_ulong(INI_HANDLE ini_file, char *section, char *key, unsigned long* valbuf);
	double *ini_get_key_double(INI_HANDLE ini_file, char *section, char *key, double* valbuf);
	//���o�@��key��val(���A��int, long, float)�A��Jini��handle�Bsection�Bkey�P�s���쪺val��buffer����ơC
	//valbuf�������j�A�Y�^��NULL�N��S�����C	
	
	int ini_remove_section(INI_HANDLE ini_file, char *section);
	//�������section�A��Jini��handle�Psection����ơC
	//���\�ɡA�^��0�A�Y�����\�h�^��1�C

	int ini_remove_key(INI_HANDLE ini_file, char *section, char *key);
	//�����@��key�A��Jini��handle�Psection�Akey����ơC
	//���\�ɡA�^��0�A�Y�����\�h�^��1�C

	char *ini_geterrmsg(void);
	//���X���~�T��
	
#ifdef __cplusplus
}
#endif

#endif
