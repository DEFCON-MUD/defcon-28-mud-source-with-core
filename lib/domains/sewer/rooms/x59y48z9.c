inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 48, 9 }));
  set_short( "Hallway - x59y48z9" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y48z9.c",
  "south" : DIR+"/rooms/x59y47z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
