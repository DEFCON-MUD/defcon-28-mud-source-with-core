inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 2 }));
  set_short( "Passage - x19y16z2" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y16z2.c",
  "south" : DIR+"/rooms/x19y15z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
