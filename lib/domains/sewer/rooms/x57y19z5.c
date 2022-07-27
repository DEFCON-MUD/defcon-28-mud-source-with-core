inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 19, 5 }));
  set_short( "Hallway - x57y19z5" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y20z5.c",
  "south" : DIR+"/rooms/x57y18z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
