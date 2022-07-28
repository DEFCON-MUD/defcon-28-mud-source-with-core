inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 36, 1 }));
  set_short( "Corridor - x10y36z1" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y36z1.c",
  "east" : DIR+"/rooms/x11y36z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
