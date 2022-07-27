inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 62, 9 }));
  set_short( "Hallway - x49y62z9" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y62z9.c",
  "north" : DIR+"/rooms/x49y63z9.c",
  "south" : DIR+"/rooms/x49y61z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
