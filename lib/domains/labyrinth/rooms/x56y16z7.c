inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 16, 7 }));
  set_short( "Corridor - x56y16z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y16z7.c",
  "east" : DIR+"/rooms/x57y16z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
