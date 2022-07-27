inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 22, 8 }));
  set_short( "Passage - x35y22z8" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y22z8.c",
  "south" : DIR+"/rooms/x35y21z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
