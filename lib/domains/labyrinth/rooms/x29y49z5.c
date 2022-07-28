inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 49, 5 }));
  set_short( "Corridor - x29y49z5" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y50z5.c",
  "south" : DIR+"/rooms/x29y48z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
