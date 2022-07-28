inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 20, 8 }));
  set_short( "Hallway - x24y20z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y20z8.c",
  "east" : DIR+"/rooms/x25y20z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
