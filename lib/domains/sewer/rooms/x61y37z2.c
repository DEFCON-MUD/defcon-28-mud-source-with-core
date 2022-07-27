inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 37, 2 }));
  set_short( "Corridor - x61y37z2" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y38z2.c",
  "south" : DIR+"/rooms/x61y36z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
