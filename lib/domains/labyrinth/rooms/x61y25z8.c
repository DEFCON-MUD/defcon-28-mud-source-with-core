inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 25, 8 }));
  set_short( "Hallway - x61y25z8" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y26z8.c",
  "south" : DIR+"/rooms/x61y24z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
