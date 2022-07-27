inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 2 }));
  set_short( "Hallway - x5y46z2" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y46z2.c",
  "north" : DIR+"/rooms/x5y47z2.c",
  "south" : DIR+"/rooms/x5y45z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
