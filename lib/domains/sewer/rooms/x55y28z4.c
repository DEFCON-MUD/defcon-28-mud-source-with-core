inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 28, 4 }));
  set_short( "Corridor - x55y28z4" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y28z4.c",
  "east" : DIR+"/rooms/x56y28z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
