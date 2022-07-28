inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 54, 3 }));
  set_short( "Corridor - x4y54z3" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y54z3.c",
  "east" : DIR+"/rooms/x5y54z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
