inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 0, 8 }));
  set_short( "Corridor - x46y0z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y0z8.c",
  "east" : DIR+"/rooms/x47y0z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
