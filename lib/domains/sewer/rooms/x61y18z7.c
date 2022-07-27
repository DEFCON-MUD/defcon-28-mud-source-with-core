inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 18, 7 }));
  set_short( "Passage - x61y18z7" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y19z7.c",
  "south" : DIR+"/rooms/x61y17z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
