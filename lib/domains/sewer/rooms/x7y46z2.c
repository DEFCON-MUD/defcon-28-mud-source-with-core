inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 46, 2 }));
  set_short( "Corridor - x7y46z2" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "south" : DIR+"/rooms/x7y45z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
