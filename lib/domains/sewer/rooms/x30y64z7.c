inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 7 }));
  set_short( "Hallway - x30y64z7" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z7.c",
  "east" : DIR+"/rooms/x31y64z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
