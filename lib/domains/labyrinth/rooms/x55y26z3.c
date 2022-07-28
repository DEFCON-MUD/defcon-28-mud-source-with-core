inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 3 }));
  set_short( "Passage - x55y26z3" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z3.c",
  "north" : DIR+"/rooms/x55y27z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
