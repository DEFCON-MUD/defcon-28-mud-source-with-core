inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 10, 0 }));
  set_short( "Hallway - x3y10z0" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y10z0.c",
  "east" : DIR+"/rooms/x4y10z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
