inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 7 }));
  set_short( "Corridor - x50y64z7" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z7.c",
  "east" : DIR+"/rooms/x51y64z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
