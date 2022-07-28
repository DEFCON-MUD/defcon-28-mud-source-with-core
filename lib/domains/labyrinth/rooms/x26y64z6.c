inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 64, 6 }));
  set_short( "Corridor - x26y64z6" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y64z6.c",
  "east" : DIR+"/rooms/x27y64z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
