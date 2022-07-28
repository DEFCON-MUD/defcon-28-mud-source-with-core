inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 8 }));
  set_short( "Hallway - x49y22z8" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y22z8.c",
  "north" : DIR+"/rooms/x49y23z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
