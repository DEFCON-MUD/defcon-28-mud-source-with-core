inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 16, 6 }));
  set_short( "Hallway - x50y16z6" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y16z6.c",
  "east" : DIR+"/rooms/x51y16z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
