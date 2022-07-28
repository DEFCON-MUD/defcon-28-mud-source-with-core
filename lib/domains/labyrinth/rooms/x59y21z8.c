inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 21, 8 }));
  set_short( "Corridor - x59y21z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y22z8.c",
  "south" : DIR+"/rooms/x59y20z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
