inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 0 }));
  set_short( "Hallway - x1y0z0" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
