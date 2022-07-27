inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 1 }));
  set_short( "Passage - x49y52z1" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y52z1.c",
  "north" : DIR+"/rooms/x49y53z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
