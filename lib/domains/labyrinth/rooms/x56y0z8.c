inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 0, 8 }));
  set_short( "Corridor - x56y0z8" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y0z8.c",
  "east" : DIR+"/rooms/x57y0z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
