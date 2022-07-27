inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 20, 6 }));
  set_short( "Passage - x45y20z6" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y20z6.c",
  "south" : DIR+"/rooms/x45y19z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
