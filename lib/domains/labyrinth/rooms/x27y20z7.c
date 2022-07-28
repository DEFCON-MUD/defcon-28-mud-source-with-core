inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 7 }));
  set_short( "Hallway - x27y20z7" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y20z7.c",
  "east" : DIR+"/rooms/x28y20z7.c",
  "south" : DIR+"/rooms/x27y19z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
