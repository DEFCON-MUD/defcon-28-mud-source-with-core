inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 35, 4 }));
  set_short( "Passage - x1y35z4" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y36z4.c",
  "south" : DIR+"/rooms/x1y34z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
