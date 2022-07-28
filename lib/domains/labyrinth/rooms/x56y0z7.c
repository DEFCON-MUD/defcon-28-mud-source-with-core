inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 0, 7 }));
  set_short( "Passage - x56y0z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y0z7.c",
  "east" : DIR+"/rooms/x57y0z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
