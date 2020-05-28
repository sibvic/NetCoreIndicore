#pragma once
namespace ProfitRobots 
{
	namespace NetCoreIndicore 
	{
        /** enumerator of the existing objects in the file accessor .*/
        public interface class IFileEnumerator// : public IObject
        {
//    /** resets enumerator. */
//    virtual void reset(IError **pperror) = 0;
//    /** gets next file. */
//    virtual bool nextFile(IError **pperror) = 0;
//    /** checks whether the current file exists. */
//    virtual bool hasFile(IError **pperror) = 0;
//    /** gets identifier of the file. */
//    virtual const char *fileId() = 0;
//    /** gets only name of the file. */
//    virtual const char *nameWithoutExtension() = 0;
//    /** gets size of the file. */
//    virtual int fileSize() = 0;
//    /**get file metadata. */
//    virtual IFileMetadata *getMetadata() = 0;
        };

        public ref class FileEnumerator : public IFileEnumerator
        {
            indicore3::IFileEnumerator* _native;
        public:
            FileEnumerator(indicore3::IFileEnumerator* native);
            ~FileEnumerator();
        };
    }
}