inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 8, 5 }));
  set_short( "Passage - x34y8z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y8z5.c",
  "east" : DIR+"/rooms/x35y8z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
