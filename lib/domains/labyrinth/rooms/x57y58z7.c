inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 58, 7 }));
  set_short( "Corridor - x57y58z7" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y58z7.c",
  "south" : DIR+"/rooms/x57y57z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
