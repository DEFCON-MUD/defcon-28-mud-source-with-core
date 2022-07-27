inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 46, 4 }));
  set_short( "Passage - x22y46z4" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y46z4.c",
  "east" : DIR+"/rooms/x23y46z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
