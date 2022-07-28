inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 26, 4 }));
  set_short( "Corridor - x30y26z4" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y26z4.c",
  "east" : DIR+"/rooms/x31y26z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
