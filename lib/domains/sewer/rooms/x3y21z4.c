inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 21, 4 }));
  set_short( "Corridor - x3y21z4" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y22z4.c",
  "south" : DIR+"/rooms/x3y20z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
