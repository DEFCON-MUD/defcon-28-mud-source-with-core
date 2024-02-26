inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 4 }));
  set_short( "Passage - x55y40z4" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y40z4.c",
  "east" : DIR+"/rooms/x56y40z4.c",
  "south" : DIR+"/rooms/x55y39z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
