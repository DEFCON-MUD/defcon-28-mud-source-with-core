inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 0 }));
  set_short( "Corridor - x27y38z0" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y38z0.c",
  "north" : DIR+"/rooms/x27y39z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
