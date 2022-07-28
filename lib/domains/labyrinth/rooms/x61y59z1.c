inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 59, 1 }));
  set_short( "Passage - x61y59z1" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y60z1.c",
  "south" : DIR+"/rooms/x61y58z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
