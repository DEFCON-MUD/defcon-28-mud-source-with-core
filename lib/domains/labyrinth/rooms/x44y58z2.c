inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 58, 2 }));
  set_short( "Hallway - x44y58z2" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y58z2.c",
  "east" : DIR+"/rooms/x45y58z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
