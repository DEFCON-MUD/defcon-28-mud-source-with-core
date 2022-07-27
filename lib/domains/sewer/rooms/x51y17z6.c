inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 17, 6 }));
  set_short( "Corridor - x51y17z6" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y18z6.c",
  "south" : DIR+"/rooms/x51y16z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
