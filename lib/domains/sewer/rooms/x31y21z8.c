inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 21, 8 }));
  set_short( "Corridor - x31y21z8" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y22z8.c",
  "south" : DIR+"/rooms/x31y20z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
