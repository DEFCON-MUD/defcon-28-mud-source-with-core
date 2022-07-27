inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 42, 4 }));
  set_short( "Hallway - x29y42z4" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y42z4.c",
  "north" : DIR+"/rooms/x29y43z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
