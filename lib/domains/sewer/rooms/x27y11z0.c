inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 11, 0 }));
  set_short( "Corridor - x27y11z0" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y12z0.c",
  "south" : DIR+"/rooms/x27y10z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
