inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 4 }));
  set_short( "Corridor - x27y20z4" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y20z4.c",
  "north" : DIR+"/rooms/x27y21z4.c",
  "south" : DIR+"/rooms/x27y19z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
