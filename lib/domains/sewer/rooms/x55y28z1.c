inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 28, 1 }));
  set_short( "Hallway - x55y28z1" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y28z1.c",
  "north" : DIR+"/rooms/x55y29z1.c",
  "south" : DIR+"/rooms/x55y27z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
