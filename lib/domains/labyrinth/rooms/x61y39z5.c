inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 39, 5 }));
  set_short( "Corridor - x61y39z5" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y40z5.c",
  "south" : DIR+"/rooms/x61y38z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
