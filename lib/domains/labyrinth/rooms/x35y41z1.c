inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 41, 1 }));
  set_short( "Corridor - x35y41z1" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y42z1.c",
  "south" : DIR+"/rooms/x35y40z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
