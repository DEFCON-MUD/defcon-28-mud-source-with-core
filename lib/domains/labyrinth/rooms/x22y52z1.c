inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 52, 1 }));
  set_short( "Corridor - x22y52z1" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y52z1.c",
  "east" : DIR+"/rooms/x23y52z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
