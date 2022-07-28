inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 2 }));
  set_short( "Corridor - x53y20z2" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y20z2.c",
  "north" : DIR+"/rooms/x53y21z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
