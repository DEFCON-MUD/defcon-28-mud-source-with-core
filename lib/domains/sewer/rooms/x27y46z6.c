inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 46, 6 }));
  set_short( "Hallway - x27y46z6" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y46z6.c",
  "north" : DIR+"/rooms/x27y47z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
