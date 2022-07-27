inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 16, 1 }));
  set_short( "Corridor - x50y16z1" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y16z1.c",
  "east" : DIR+"/rooms/x51y16z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
