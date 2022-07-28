inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 8, 2 }));
  set_short( "Corridor - x38y8z2" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y8z2.c",
  "east" : DIR+"/rooms/x39y8z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
