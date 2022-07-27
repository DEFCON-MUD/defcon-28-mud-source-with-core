inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 61, 4 }));
  set_short( "Passage - x19y61z4" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y62z4.c",
  "south" : DIR+"/rooms/x19y60z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
