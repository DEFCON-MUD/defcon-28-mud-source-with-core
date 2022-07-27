inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 52, 6 }));
  set_short( "Hallway - x38y52z6" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y52z6.c",
  "east" : DIR+"/rooms/x39y52z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
