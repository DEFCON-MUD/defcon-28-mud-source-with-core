inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 11, 9 }));
  set_short( "Corridor - x57y11z9" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y12z9.c",
  "south" : DIR+"/rooms/x57y10z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
