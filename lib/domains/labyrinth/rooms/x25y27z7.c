inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 27, 7 }));
  set_short( "Corridor - x25y27z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y28z7.c",
  "south" : DIR+"/rooms/x25y26z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
