inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 16, 5 }));
  set_short( "Passage - x32y16z5" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y16z5.c",
  "east" : DIR+"/rooms/x33y16z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
