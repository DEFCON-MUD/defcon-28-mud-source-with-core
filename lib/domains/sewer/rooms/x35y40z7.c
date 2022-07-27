inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 40, 7 }));
  set_short( "Hallway - x35y40z7" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y41z7.c",
  "south" : DIR+"/rooms/x35y39z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
