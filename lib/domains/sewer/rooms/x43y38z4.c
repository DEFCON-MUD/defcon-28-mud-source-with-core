inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 38, 4 }));
  set_short( "Hallway - x43y38z4" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y38z4.c",
  "north" : DIR+"/rooms/x43y39z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
