inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 37, 0 }));
  set_short( "Corridor - x33y37z0" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y38z0.c",
  "south" : DIR+"/rooms/x33y36z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
