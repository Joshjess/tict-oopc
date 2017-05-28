#ifndef vectors_HPP
#define vectors_HPP

/// @file

/// \brief
/// vectors ADT
/// \details
/// This is an ADT that implements vectors (fractional) values.
/// The x and y are stored as two (signed) integers.
/// The appropriate constructors and operators are provided.
///
/// vectors values are always simplied (reduced): the x
/// and y have no common factors.
class vectors {
private:
   int x;
   int y;
   
public:

   /// \brief
   /// constructor from explicit values
   /// \details
   /// This constructor initializes a vectors from its x and y.
   /// The default value for the y is 1, so a vectors be initialized
   /// with just a whole value.
   vectors( int x = 1, int y = 1 ):
     x( x ), y( y )
   {}
   

   /// \brief
   /// output operator for a vectors value
   /// \details
   /// This operator<< prints a constructor in the format
   /// [x/y] where both values are printed as
   /// decimal values.
   friend std::ostream & operator<<( std::ostream & lhs, const vectors & rhs ){
      return lhs 
         << "(" 
         << rhs.x 
         << "/" 
         << rhs.y
         << ")";
   }   
   
   /// \brief   
   /// multiply a vectors by an integer
   /// \details
   /// This operator* multiplies a vectors value by an integer value.
	vectors operator+(const vector & rhs) const{
		return vectors(x+rhs.x, y+rhs.y);
	}
   
	vectors operator+() const{
		return vector(x,y);
	}
   

   vectors & operator+=( const vectors & rhs ){
      x = x + rhs.x;
      y = y + rhs.y;
      return *this;
   }
   

   vectors operator*( const vectors & rhs ) const{
		return vectors (x * rhs.y + rhs.x * y,y * rhs.y + rhs.x * y)
   }
   vectors operator*(const int rhs) const{
		return vectors(
			x * rhs,
			y * rhs
		);
	}
	
   
	/// \brief
	///  mutiply and return righthandside
	/// \details
	/// mutiply and return righthandside
vectors & operator*=(const vectors & rhs){
		x = (x * rhs.x) + (x * rhs.y);
		y = (y * rhs.x) + (y * rhs.y);
		return *this;
	}
	
	vectors & operator*=(const int rhs){
		x *= rhs;
		y *= rhs;
		return *this;
	}
	vectors operator*(const int l , const vectors & rhs){
	return vectors(rhs.x * l, rhs.y * l);
}
	
};

#endif