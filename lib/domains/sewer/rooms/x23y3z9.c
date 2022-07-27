inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 3, 9 }));
  set_short( "Passage - x23y3z9" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y4z9.c",
  "south" : DIR+"/rooms/x23y2z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
