inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 22, 6 }));
  set_short( "Hallway - x8y22z6" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y22z6.c",
  "east" : DIR+"/rooms/x9y22z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
