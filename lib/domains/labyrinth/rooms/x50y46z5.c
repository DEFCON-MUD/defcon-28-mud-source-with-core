inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 46, 5 }));
  set_short( "Passage - x50y46z5" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y46z5.c",
  "east" : DIR+"/rooms/x51y46z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
