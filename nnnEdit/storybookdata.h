//
// storybookdata.h
//

#if !defined __NNNEDIT_STORYBOOKDATA__
#define __NNNEDIT_STORYBOOKDATA__

//#include "case.h"

class CStoryBookData : public CCase
{
public:
	CStoryBookData();
	virtual ~CStoryBookData();
	void End(void);

	BOOL LoadAll(int n, FILE* file);
	BOOL DeleteAll(void);

	//�p��
	BOOL Load(FILE* file);
	BOOL Save(FILE* file);
	LPSTR GetMyName(void);
	void SetMyName(LPSTR name);
	CCase* NewObject(void);
	BOOL CopyData(CCase* lpFrom){return TRUE;}

	BOOL CopyOriginalData(CCase* lpCase){return TRUE;}
	int Clean(void){return 0;}

	int SearchStory(LPSTR storyName,int searchStart = 0,int noCheckNumber = -1);

	void OutputScriptSource(FILE* file);
	void OutputScriptSourceJson(FILE* file);

private:

};


#endif
/*_*/

