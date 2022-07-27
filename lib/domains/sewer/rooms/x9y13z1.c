inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 13, 1 }));
  set_short( "Passage - x9y13z1" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y14z1.c",
  "south" : DIR+"/rooms/x9y12z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
