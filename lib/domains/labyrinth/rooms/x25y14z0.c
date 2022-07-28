inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 0 }));
  set_short( "Corridor - x25y14z0" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y15z0.c",
  "south" : DIR+"/rooms/x25y13z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
