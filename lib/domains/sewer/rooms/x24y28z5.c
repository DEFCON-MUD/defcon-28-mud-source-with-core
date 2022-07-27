inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 28, 5 }));
  set_short( "Corridor - x24y28z5" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y28z5.c",
  "east" : DIR+"/rooms/x25y28z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
