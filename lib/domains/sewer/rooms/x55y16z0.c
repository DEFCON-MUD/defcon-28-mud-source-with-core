inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 16, 0 }));
  set_short( "Hallway - x55y16z0" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y16z0.c",
  "north" : DIR+"/rooms/x55y17z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
