inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 0 }));
  set_short( "Passage - x49y40z0" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y40z0.c",
  "north" : DIR+"/rooms/x49y41z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
