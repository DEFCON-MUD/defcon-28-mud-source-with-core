inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 2 }));
  set_short( "Hallway - x37y14z2" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y14z2.c",
  "east" : DIR+"/rooms/x38y14z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
