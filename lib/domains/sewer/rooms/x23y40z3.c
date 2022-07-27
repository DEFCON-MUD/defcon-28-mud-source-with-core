inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 40, 3 }));
  set_short( "Hallway - x23y40z3" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y40z3.c",
  "south" : DIR+"/rooms/x23y39z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
