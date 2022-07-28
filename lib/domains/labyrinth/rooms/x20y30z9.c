inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 30, 9 }));
  set_short( "Corridor - x20y30z9" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y30z9.c",
  "east" : DIR+"/rooms/x21y30z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
