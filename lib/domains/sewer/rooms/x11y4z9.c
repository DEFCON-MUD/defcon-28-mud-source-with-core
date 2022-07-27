inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 9 }));
  set_short( "Corridor - x11y4z9" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y4z9.c",
  "south" : DIR+"/rooms/x11y3z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
