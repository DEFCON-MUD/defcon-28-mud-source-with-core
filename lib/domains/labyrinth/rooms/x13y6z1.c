inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 6, 1 }));
  set_short( "Corridor - x13y6z1" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y6z1.c",
  "south" : DIR+"/rooms/x13y5z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
