inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 59, 3 }));
  set_short( "Corridor - x59y59z3" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y60z3.c",
  "south" : DIR+"/rooms/x59y58z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
