inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 44, 7 }));
  set_short( "Hallway - x1y44z7" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y44z7.c",
  "north" : DIR+"/rooms/x1y45z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
