#ifndef FEPIC_SHAPE_IMPL_HPP
#define FEPIC_SHAPE_IMPL_HPP
/* Every Shape type must include this file */

#ifndef FEPIC_SCALAR_TYPE
typedef double Real;
#endif


// Every Shape type must inherits this class
class ShapeFuncImpl
{
public:

  virtual const char* name() const = 0;

  virtual Real value(Real const*x, unsigned ith) const = 0;
  virtual Real grad(Real const*x, unsigned ith, unsigned c) const = 0;

  virtual bool isTauEquivalent() const = 0;
  virtual bool isLinear() const = 0;
  virtual bool isConforming() const = 0;
  virtual int numDofs() const = 0;
  virtual int dim()    const = 0;

  virtual int numDofsInsideCorner()  const = 0;
  virtual int numDofsInsideFacet()   const = 0;
  virtual int numDofsInsideCell()    const = 0;

  virtual int numDofsPerVertice() const = 0;
  virtual int numDofsPerCorner()  const = 0;
  virtual int numDofsPerFacet()   const = 0;

  virtual ShapeFuncImpl* clone() const = 0;

  virtual ~ShapeFuncImpl() {};

}; // end class ShapeFunction




#endif


