inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 9 }));
  set_short( "Hallway - x25y20z9" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y20z9.c",
  "north" : DIR+"/rooms/x25y21z9.c",
  "south" : DIR+"/rooms/x25y19z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
