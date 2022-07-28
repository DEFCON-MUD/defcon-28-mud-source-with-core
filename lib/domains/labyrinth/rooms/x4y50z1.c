inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 50, 1 }));
  set_short( "Passage - x4y50z1" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y50z1.c",
  "east" : DIR+"/rooms/x5y50z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
