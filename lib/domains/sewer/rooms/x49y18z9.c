inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 9 }));
  set_short( "Corridor - x49y18z9" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y18z9.c",
  "south" : DIR+"/rooms/x49y17z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
