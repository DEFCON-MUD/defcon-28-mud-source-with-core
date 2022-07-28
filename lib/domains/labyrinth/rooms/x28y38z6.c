inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 38, 6 }));
  set_short( "Passage - x28y38z6" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y38z6.c",
  "east" : DIR+"/rooms/x29y38z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
