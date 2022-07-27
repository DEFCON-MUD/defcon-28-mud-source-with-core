inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 62, 6 }));
  set_short( "Passage - x15y62z6" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y62z6.c",
  "south" : DIR+"/rooms/x15y61z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
