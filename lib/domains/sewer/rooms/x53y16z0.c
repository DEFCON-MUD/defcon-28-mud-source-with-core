inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 0 }));
  set_short( "Corridor - x53y16z0" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y16z0.c",
  "east" : DIR+"/rooms/x54y16z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
