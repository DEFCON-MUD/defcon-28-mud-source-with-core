inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 50, 5 }));
  set_short( "Passage - x8y50z5" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y50z5.c",
  "east" : DIR+"/rooms/x9y50z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
