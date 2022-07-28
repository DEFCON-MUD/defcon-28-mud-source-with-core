inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 38, 1 }));
  set_short( "Corridor - x49y38z1" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y39z1.c",
  "south" : DIR+"/rooms/x49y37z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
