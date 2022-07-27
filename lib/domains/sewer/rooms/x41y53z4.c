inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 53, 4 }));
  set_short( "Corridor - x41y53z4" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y54z4.c",
  "south" : DIR+"/rooms/x41y52z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
