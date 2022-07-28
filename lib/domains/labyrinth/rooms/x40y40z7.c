inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 40, 7 }));
  set_short( "Corridor - x40y40z7" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y40z7.c",
  "east" : DIR+"/rooms/x41y40z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
