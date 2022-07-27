inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 16, 7 }));
  set_short( "Corridor - x26y16z7" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y16z7.c",
  "east" : DIR+"/rooms/x27y16z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
