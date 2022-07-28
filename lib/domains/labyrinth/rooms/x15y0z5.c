inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 5 }));
  set_short( "Corridor - x15y0z5" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z5.c",
  "east" : DIR+"/rooms/x16y0z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
