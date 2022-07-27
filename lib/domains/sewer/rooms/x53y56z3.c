inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 3 }));
  set_short( "Corridor - x53y56z3" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y56z3.c",
  "south" : DIR+"/rooms/x53y55z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
