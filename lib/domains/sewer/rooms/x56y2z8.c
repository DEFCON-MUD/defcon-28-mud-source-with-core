inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 8 }));
  set_short( "Hallway - x56y2z8" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z8.c",
  "east" : DIR+"/rooms/x57y2z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
