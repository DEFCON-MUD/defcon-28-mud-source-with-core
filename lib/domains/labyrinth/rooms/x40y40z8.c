inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 40, 8 }));
  set_short( "Hallway - x40y40z8" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y40z8.c",
  "east" : DIR+"/rooms/x41y40z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
