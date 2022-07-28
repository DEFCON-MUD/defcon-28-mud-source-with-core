inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 27, 4 }));
  set_short( "Passage - x21y27z4" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y28z4.c",
  "south" : DIR+"/rooms/x21y26z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
