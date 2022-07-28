inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 46, 8 }));
  set_short( "Corridor - x3y46z8" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y46z8.c",
  "east" : DIR+"/rooms/x4y46z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
