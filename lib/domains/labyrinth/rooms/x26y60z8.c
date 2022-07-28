inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 60, 8 }));
  set_short( "Hallway - x26y60z8" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y60z8.c",
  "east" : DIR+"/rooms/x27y60z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
