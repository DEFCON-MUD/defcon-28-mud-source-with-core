inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 9 }));
  set_short( "Corridor - x19y54z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y54z9.c",
  "east" : DIR+"/rooms/x20y54z9.c",
  "north" : DIR+"/rooms/x19y55z9.c",
  "south" : DIR+"/rooms/x19y53z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
