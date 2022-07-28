inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 62, 4 }));
  set_short( "Corridor - x36y62z4" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y62z4.c",
  "east" : DIR+"/rooms/x37y62z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
