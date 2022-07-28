inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 0, 6 }));
  set_short( "Hallway - x31y0z6" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y0z6.c",
  "east" : DIR+"/rooms/x32y0z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
