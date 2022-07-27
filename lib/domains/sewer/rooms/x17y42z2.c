inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 42, 2 }));
  set_short( "Hallway - x17y42z2" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y42z2.c",
  "north" : DIR+"/rooms/x17y43z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
