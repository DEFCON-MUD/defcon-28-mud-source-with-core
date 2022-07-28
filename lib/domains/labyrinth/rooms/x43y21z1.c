inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 21, 1 }));
  set_short( "Corridor - x43y21z1" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y22z1.c",
  "south" : DIR+"/rooms/x43y20z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
