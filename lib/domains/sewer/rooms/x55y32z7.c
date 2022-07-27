inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 32, 7 }));
  set_short( "Corridor - x55y32z7" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y32z7.c",
  "east" : DIR+"/rooms/x56y32z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
