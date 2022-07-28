inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 14, 2 }));
  set_short( "Corridor - x22y14z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y14z2.c",
  "east" : DIR+"/rooms/x23y14z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
