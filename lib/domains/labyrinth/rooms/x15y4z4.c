inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 4, 4 }));
  set_short( "Corridor - x15y4z4" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y4z4.c",
  "north" : DIR+"/rooms/x15y5z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
