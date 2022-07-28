inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 16, 0 }));
  set_short( "Passage - x42y16z0" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y16z0.c",
  "east" : DIR+"/rooms/x43y16z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
