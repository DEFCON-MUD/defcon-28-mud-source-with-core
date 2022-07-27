inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 53, 4 }));
  set_short( "Passage - x43y53z4" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y54z4.c",
  "south" : DIR+"/rooms/x43y52z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
