inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 58, 4 }));
  set_short( "Corridor - x15y58z4" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y58z4.c",
  "east" : DIR+"/rooms/x16y58z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
