inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 22, 7 }));
  set_short( "Hallway - x15y22z7" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y22z7.c",
  "south" : DIR+"/rooms/x15y21z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
