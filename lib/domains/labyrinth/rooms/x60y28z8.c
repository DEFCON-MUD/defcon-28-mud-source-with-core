inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 28, 8 }));
  set_short( "Hallway - x60y28z8" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y28z8.c",
  "east" : DIR+"/rooms/x61y28z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
