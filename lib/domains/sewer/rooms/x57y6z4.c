inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 6, 4 }));
  set_short( "Corridor - x57y6z4" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y6z4.c",
  "south" : DIR+"/rooms/x57y5z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
