inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 5, 5 }));
  set_short( "Corridor - x19y5z5" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y6z5.c",
  "south" : DIR+"/rooms/x19y4z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
