inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 41, 0 }));
  set_short( "Passage - x7y41z0" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y42z0.c",
  "south" : DIR+"/rooms/x7y40z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
