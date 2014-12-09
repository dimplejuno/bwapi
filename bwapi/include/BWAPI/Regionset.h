#pragma once
#include "SetContainer.h"
#include <BWAPI/Position.h>
#include <BWAPI/Filters.h>

namespace BWAPI
{
  // Forward Declarations
  class RegionInterface;
  typedef RegionInterface *Region;

  class Unitset;

  class Regionset : public SetContainer<BWAPI::Region, std::hash<void*>>
  {
  public:

    /// @copydoc RegionInterface::getCenter
    Position getCenter() const;

    /// @copydoc RegionInterface::getUnits
    Unitset getUnits(const UnitFilter &pred = nullptr) const;
  };
}

