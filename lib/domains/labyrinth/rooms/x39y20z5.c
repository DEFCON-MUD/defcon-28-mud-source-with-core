inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 5 }));
  set_short( "Corridor - x39y20z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y20z5.c",
  "east" : DIR+"/rooms/x40y20z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
