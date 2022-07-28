inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 21, 1 }));
  set_short( "Corridor - x5y21z1" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y22z1.c",
  "south" : DIR+"/rooms/x5y20z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
