inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 3 }));
  set_short( "Hallway - x25y42z3" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y42z3.c",
  "east" : DIR+"/rooms/x26y42z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
