inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 63, 5 }));
  set_short( "Passage - x13y63z5" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y64z5.c",
  "south" : DIR+"/rooms/x13y62z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
