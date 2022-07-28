inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 54, 9 }));
  set_short( "Corridor - x53y54z9" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y54z9.c",
  "south" : DIR+"/rooms/x53y53z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
