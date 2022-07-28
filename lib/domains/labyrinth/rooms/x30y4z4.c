inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 4, 4 }));
  set_short( "Corridor - x30y4z4" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y4z4.c",
  "east" : DIR+"/rooms/x31y4z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
