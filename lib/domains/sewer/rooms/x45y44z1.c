inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 1 }));
  set_short( "Passage - x45y44z1" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y44z1.c",
  "south" : DIR+"/rooms/x45y43z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
