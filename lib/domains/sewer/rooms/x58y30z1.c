inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 30, 1 }));
  set_short( "Hallway - x58y30z1" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y30z1.c",
  "east" : DIR+"/rooms/x59y30z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
