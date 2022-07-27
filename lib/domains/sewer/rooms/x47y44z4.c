inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 4 }));
  set_short( "Hallway - x47y44z4" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y45z4.c",
  "south" : DIR+"/rooms/x47y43z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
