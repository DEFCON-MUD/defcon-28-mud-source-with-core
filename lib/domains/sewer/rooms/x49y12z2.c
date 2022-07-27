inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 12, 2 }));
  set_short( "Passage - x49y12z2" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y12z2.c",
  "north" : DIR+"/rooms/x49y13z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
