inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 11, 8 }));
  set_short( "Corridor - x47y11z8" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y12z8.c",
  "south" : DIR+"/rooms/x47y10z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
