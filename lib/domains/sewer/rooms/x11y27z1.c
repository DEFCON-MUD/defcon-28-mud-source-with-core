inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 27, 1 }));
  set_short( "Corridor - x11y27z1" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y28z1.c",
  "south" : DIR+"/rooms/x11y26z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
