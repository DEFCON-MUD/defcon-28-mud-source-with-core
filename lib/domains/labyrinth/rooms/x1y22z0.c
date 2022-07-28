inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 0 }));
  set_short( "Corridor - x1y22z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y23z0.c",
  "south" : DIR+"/rooms/x1y21z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
