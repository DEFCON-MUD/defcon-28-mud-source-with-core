inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 20, 7 }));
  set_short( "Corridor - x9y20z7" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y20z7.c",
  "south" : DIR+"/rooms/x9y19z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
