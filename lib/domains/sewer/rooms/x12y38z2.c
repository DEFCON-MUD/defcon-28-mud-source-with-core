inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 38, 2 }));
  set_short( "Hallway - x12y38z2" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y38z2.c",
  "east" : DIR+"/rooms/x13y38z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
