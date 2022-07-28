inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 0 }));
  set_short( "Hallway - x9y8z0" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y8z0.c",
  "east" : DIR+"/rooms/x10y8z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
