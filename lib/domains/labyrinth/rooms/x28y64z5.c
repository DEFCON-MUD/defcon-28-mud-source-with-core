inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 64, 5 }));
  set_short( "Hallway - x28y64z5" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y64z5.c",
  "east" : DIR+"/rooms/x29y64z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
