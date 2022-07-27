inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 6, 0 }));
  set_short( "Corridor - x28y6z0" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y6z0.c",
  "east" : DIR+"/rooms/x29y6z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
