inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 0 }));
  set_short( "Corridor - x49y42z0" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y42z0.c",
  "south" : DIR+"/rooms/x49y41z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
