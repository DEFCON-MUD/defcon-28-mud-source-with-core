inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 10, 8 }));
  set_short( "Corridor - x53y10z8" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y10z8.c",
  "north" : DIR+"/rooms/x53y11z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
