inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 54, 5 }));
  set_short( "Hallway - x49y54z5" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y54z5.c",
  "south" : DIR+"/rooms/x49y53z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
