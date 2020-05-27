//TODO: convert
//#pragma once
//
//#include "iinstance.h"
//
//namespace indicore3
//{
//
//class IChartPoint
//{
// protected:
//    IChartPoint();
//    virtual ~IChartPoint();
// public:
//    virtual double getDate() = 0;
//    virtual double getPrice() = 0;
//};
//
//class IChartRectangle
//{
// protected:
//    IChartRectangle();
//    virtual ~IChartRectangle();
// public:
//
//    virtual IChartPoint *getTopLeft() = 0;
//    virtual IChartPoint *getBottomRight() = 0;
//};
//
//class IReferencePointsManager;
//
//class INDICORE IToolInstance : public IInstance
//{
// protected:
//    IToolInstance();
//    virtual ~IToolInstance();
// public:
//    /** Gets name of the tool instance. */
//    virtual const char *getName() = 0;
//
//    /** Gets parameters used to create. */
//    virtual IParameters *getParameters() = 0;
//
//    /** Gets the tool rectangle (required for more detailed position recognition). */
//    virtual IChartRectangle *getInstanceRectangle() = 0;
//
//    virtual bool creationStarted(IError **pperror) = 0;
//    virtual bool click(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool doubleClick(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool drag(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool dragEnd(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool creationFinished(IError **pperror) = 0;
//    virtual bool prepare(bool onlyName, IError **pperror) = 0;
//
//    /** Moves shape */
//    ///@{
//    virtual bool moveStart(IError **pperror) = 0;
//    virtual bool move(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool moveFinished(IError **pperror) = 0;
//    ///@}
//
//    /** Moves ref point */
//    ///@{
//    virtual bool moveReferencePointStart(int id, IError **pperror) = 0;
//    virtual bool moveReferencePoint(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool moveReferencePointFinished(IError **pperror) = 0;
//    ///@}
//
//    /** Checks whether the parameters can be changed "on the fly" */
//    virtual bool canChangeParameters() = 0;
//
//    /** Checks the parameters before replacing them on the fly.
//
//        @return true in case the function did not return an error (i.e. check successfully),
//                false in case the function returns error (i.e. parameters aren't good).
//
//        @param params       New set of the parameters
//        @param msg          [output] The new name of the instance (retcode == true)
//                                     or
//                                     Error (retcode == false)
//
//      */
//    virtual bool checkParameters(IParameters *params, char *newName, index_t newNameMax, IError **error) = 0;
//    /** Changes the parameters and notify a tool about the change.
//
//        @param params       New set of the parameters
//        @param error        [output] The error
//      */
//    virtual bool changeParameters(IParameters *params, IError **error) = 0;
//
//    virtual bool draw(IOwnerDrawnContext::Stage stage, IOwnerDrawnContext *context, IError **error) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IToolInstanceCallback : public IToolInstance
//{
// protected:
//    IToolInstanceCallback();
//    virtual ~IToolInstanceCallback();
// public:
//    virtual void setName(const char *name) = 0;
//    virtual void setInstanceRectangle(double topLeftDate, double topLeftPrice, double bottomRightDate, double bottomRightPrice) = 0;
//
//    static const GUID ID;
//};
//
//class INDICORE IToolInstanceImplementation : public IExecutable
//{
// protected:
//    IToolInstanceImplementation();
//    virtual ~IToolInstanceImplementation();
// public:
//    virtual bool init(IToolInstanceCallback *callback, IError **pperror) = 0;
//    virtual bool creationStarted(IError **pperror) = 0;
//    virtual bool click(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool doubleClick(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool drag(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool dragEnd(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool creationFinished(IError **pperror) = 0;
//    virtual bool prepare(bool onlyName, IError **pperror) = 0;
//    virtual bool moveStart(IError **pperror) = 0;
//    virtual bool move(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool moveFinished(IError **pperror) = 0;
//    virtual bool moveReferencePointStart(int id, IError **pperror) = 0;
//    virtual bool moveReferencePoint(int x, int y, double price, double date, IError **pperror) = 0;
//    virtual bool moveReferencePointFinished(IError **pperror) = 0;
//    virtual IInstance::NotifyFinishedResult notifyFinished(int cookie, IValueMap *vmap, IError **pperror) = 0;
//    virtual bool releaseInstance(IError **pperror) = 0;
//    virtual bool canChangeParameters() = 0;
//    virtual bool checkParameters(IParameters *params, char *newName, index_t newNameMax, IError **error) = 0;
//    virtual bool changeParameters(IParameters *params, IError **error) = 0;
//    virtual bool draw(IOwnerDrawnContext::Stage stage, IOwnerDrawnContext *context, IError **pperor) = 0;
//
//    static const GUID ID;
//};
//
//}
