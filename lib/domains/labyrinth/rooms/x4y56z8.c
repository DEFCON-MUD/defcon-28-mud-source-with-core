inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 56, 8 }));
  set_short( "Corridor - x4y56z8" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y56z8.c",
  "east" : DIR+"/rooms/x5y56z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
