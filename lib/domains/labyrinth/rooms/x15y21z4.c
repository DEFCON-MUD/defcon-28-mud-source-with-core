inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 21, 4 }));
  set_short( "Corridor - x15y21z4" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y22z4.c",
  "south" : DIR+"/rooms/x15y20z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
