inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 58, 8 }));
  set_short( "Corridor - x26y58z8" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y58z8.c",
  "east" : DIR+"/rooms/x27y58z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
