inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 15, 0 }));
  set_short( "Corridor - x1y15z0" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y16z0.c",
  "south" : DIR+"/rooms/x1y14z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
