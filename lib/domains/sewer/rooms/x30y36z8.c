inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 36, 8 }));
  set_short( "Hallway - x30y36z8" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y36z8.c",
  "east" : DIR+"/rooms/x31y36z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
