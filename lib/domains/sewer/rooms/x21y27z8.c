inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 27, 8 }));
  set_short( "Corridor - x21y27z8" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y28z8.c",
  "south" : DIR+"/rooms/x21y26z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
