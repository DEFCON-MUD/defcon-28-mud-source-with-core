inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 26, 4 }));
  set_short( "Corridor - x43y26z4" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y26z4.c",
  "south" : DIR+"/rooms/x43y25z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
