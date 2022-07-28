inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 16, 5 }));
  set_short( "Corridor - x8y16z5" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y16z5.c",
  "east" : DIR+"/rooms/x9y16z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
