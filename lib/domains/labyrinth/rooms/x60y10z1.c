inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 10, 1 }));
  set_short( "Passage - x60y10z1" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y10z1.c",
  "east" : DIR+"/rooms/x61y10z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
