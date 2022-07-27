inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 14, 7 }));
  set_short( "Passage - x19y14z7" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y14z7.c",
  "east" : DIR+"/rooms/x20y14z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
