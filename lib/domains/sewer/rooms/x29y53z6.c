inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 53, 6 }));
  set_short( "Hallway - x29y53z6" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y54z6.c",
  "south" : DIR+"/rooms/x29y52z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
