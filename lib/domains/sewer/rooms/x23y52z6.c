inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 6 }));
  set_short( "Corridor - x23y52z6" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y52z6.c",
  "north" : DIR+"/rooms/x23y53z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
