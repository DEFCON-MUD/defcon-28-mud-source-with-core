inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 18, 2 }));
  set_short( "Hallway - x30y18z2" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y18z2.c",
  "east" : DIR+"/rooms/x31y18z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
