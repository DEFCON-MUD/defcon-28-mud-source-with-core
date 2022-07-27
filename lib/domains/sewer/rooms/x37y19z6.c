inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 19, 6 }));
  set_short( "Hallway - x37y19z6" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y20z6.c",
  "south" : DIR+"/rooms/x37y18z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
