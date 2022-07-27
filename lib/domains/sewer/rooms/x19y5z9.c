inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 5, 9 }));
  set_short( "Passage - x19y5z9" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y6z9.c",
  "south" : DIR+"/rooms/x19y4z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
