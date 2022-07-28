inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 63, 0 }));
  set_short( "Corridor - x61y63z0" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y64z0.c",
  "south" : DIR+"/rooms/x61y62z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
