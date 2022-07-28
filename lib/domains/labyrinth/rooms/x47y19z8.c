inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 19, 8 }));
  set_short( "Passage - x47y19z8" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y20z8.c",
  "south" : DIR+"/rooms/x47y18z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
