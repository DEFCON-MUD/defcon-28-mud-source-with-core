inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 9, 7 }));
  set_short( "Hallway - x57y9z7" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y10z7.c",
  "south" : DIR+"/rooms/x57y8z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
