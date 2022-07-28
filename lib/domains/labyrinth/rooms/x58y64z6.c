inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 64, 6 }));
  set_short( "Hallway - x58y64z6" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y64z6.c",
  "east" : DIR+"/rooms/x59y64z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
