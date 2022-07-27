inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 25, 4 }));
  set_short( "Corridor - x55y25z4" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y26z4.c",
  "south" : DIR+"/rooms/x55y24z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
