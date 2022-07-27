inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 40, 9 }));
  set_short( "Passage - x30y40z9" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y40z9.c",
  "east" : DIR+"/rooms/x31y40z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
