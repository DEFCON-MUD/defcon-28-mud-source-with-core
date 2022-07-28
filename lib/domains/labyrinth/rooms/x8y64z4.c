inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 64, 4 }));
  set_short( "Corridor - x8y64z4" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y64z4.c",
  "east" : DIR+"/rooms/x9y64z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
