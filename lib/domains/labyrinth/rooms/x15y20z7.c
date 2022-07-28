inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 7 }));
  set_short( "Corridor - x15y20z7" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y20z7.c",
  "north" : DIR+"/rooms/x15y21z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
