inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 28, 2 }));
  set_short( "Passage - x56y28z2" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y28z2.c",
  "east" : DIR+"/rooms/x57y28z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
