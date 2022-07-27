inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 35, 6 }));
  set_short( "Corridor - x19y35z6" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y36z6.c",
  "south" : DIR+"/rooms/x19y34z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
