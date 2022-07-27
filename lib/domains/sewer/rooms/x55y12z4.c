inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 12, 4 }));
  set_short( "Hallway - x55y12z4" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y12z4.c",
  "south" : DIR+"/rooms/x55y11z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
