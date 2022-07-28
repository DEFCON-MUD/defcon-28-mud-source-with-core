inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 36, 4 }));
  set_short( "Corridor - x26y36z4" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y36z4.c",
  "east" : DIR+"/rooms/x27y36z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
