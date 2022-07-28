inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 60, 8 }));
  set_short( "Passage - x40y60z8" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y60z8.c",
  "east" : DIR+"/rooms/x41y60z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
