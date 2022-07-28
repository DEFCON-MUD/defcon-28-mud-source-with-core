inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 0, 8 }));
  set_short( "Hallway - x54y0z8" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y0z8.c",
  "east" : DIR+"/rooms/x55y0z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
