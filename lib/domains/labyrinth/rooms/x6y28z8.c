inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 28, 8 }));
  set_short( "Corridor - x6y28z8" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y28z8.c",
  "east" : DIR+"/rooms/x7y28z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
