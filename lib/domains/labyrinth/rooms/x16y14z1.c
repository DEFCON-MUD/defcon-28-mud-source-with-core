inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 14, 1 }));
  set_short( "Corridor - x16y14z1" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y14z1.c",
  "east" : DIR+"/rooms/x17y14z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
