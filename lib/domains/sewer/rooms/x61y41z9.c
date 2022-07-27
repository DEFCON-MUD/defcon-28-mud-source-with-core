inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 41, 9 }));
  set_short( "Hallway - x61y41z9" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y42z9.c",
  "south" : DIR+"/rooms/x61y40z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
