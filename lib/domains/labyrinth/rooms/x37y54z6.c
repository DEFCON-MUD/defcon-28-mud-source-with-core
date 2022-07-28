inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 54, 6 }));
  set_short( "Corridor - x37y54z6" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y54z6.c",
  "south" : DIR+"/rooms/x37y53z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
