inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 6 }));
  set_short( "Passage - x55y34z6" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y34z6.c",
  "north" : DIR+"/rooms/x55y35z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
