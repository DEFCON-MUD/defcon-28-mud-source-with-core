inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 35, 4 }));
  set_short( "Passage - x5y35z4" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y36z4.c",
  "south" : DIR+"/rooms/x5y34z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
