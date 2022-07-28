inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 1 }));
  set_short( "Corridor - x17y22z1" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y22z1.c",
  "east" : DIR+"/rooms/x18y22z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
