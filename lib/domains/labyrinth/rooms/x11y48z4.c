inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 48, 4 }));
  set_short( "Corridor - x11y48z4" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y48z4.c",
  "south" : DIR+"/rooms/x11y47z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
