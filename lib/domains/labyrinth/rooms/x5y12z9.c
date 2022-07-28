inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 12, 9 }));
  set_short( "Hallway - x5y12z9" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y12z9.c",
  "north" : DIR+"/rooms/x5y13z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
