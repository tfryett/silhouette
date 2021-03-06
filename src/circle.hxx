// This file is a part of silhouette (2D Geometry suite)
//
// Copyright 2015 Taylor Fryett
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CIRCLE_HXX
#define CIRCLE_HXX

#include "oval.hxx"

namespace sil {

  class Circle : public Oval {
  private:

  protected:

  public:
    
    /// \brief The recommended constructor for this class. 
    ///
    /// @usrCenter The coordinate of the center of the circle.
    /// @usrRadius The radius of the constructed circle.
    Circle(CoordPnt usrCenter, double usrRadius);
    
    /// \brief The recommended constructor for this class. 
    ///
    /// @usrCenter The coordinate of the center of the circle.
    /// @usrRadius The radius of the constructed circle.
    /// @numVertices The number of vertices in the polygon to represent the circle.
    Circle(CoordPnt usrCenter, double usrRadius, int numVertices);

  }; // End declaration of class "Circle"
}

#endif // CIRCLE_HXX
