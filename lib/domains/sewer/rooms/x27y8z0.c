inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 0 }));
  set_short( "Corridor - x27y8z0" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y8z0.c",
  "north" : DIR+"/rooms/x27y9z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
