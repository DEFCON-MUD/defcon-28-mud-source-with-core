inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 58, 0 }));
  set_short( "Passage - x43y58z0" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y59z0.c",
  "south" : DIR+"/rooms/x43y57z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
