inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 6 }));
  set_short( "Corridor - x60y64z6" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z6.c",
  "east" : DIR+"/rooms/x61y64z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
