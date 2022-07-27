inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 35, 8 }));
  set_short( "Passage - x5y35z8" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y36z8.c",
  "south" : DIR+"/rooms/x5y34z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
