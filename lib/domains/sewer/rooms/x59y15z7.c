inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 15, 7 }));
  set_short( "Corridor - x59y15z7" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y16z7.c",
  "south" : DIR+"/rooms/x59y14z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
