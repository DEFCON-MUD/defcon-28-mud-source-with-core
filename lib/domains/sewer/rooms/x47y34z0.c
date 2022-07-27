inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 0 }));
  set_short( "Corridor - x47y34z0" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y34z0.c",
  "north" : DIR+"/rooms/x47y35z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
