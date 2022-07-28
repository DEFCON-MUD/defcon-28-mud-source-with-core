inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 55, 8 }));
  set_short( "Corridor - x55y55z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y56z8.c",
  "south" : DIR+"/rooms/x55y54z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
