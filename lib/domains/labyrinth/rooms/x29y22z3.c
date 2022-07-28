inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 22, 3 }));
  set_short( "Corridor - x29y22z3" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y22z3.c",
  "south" : DIR+"/rooms/x29y21z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
