inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 3 }));
  set_short( "Passage - x55y60z3" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y60z3.c",
  "east" : DIR+"/rooms/x56y60z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
