inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 3 }));
  set_short( "Passage - x43y16z3" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y16z3.c",
  "east" : DIR+"/rooms/x44y16z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
