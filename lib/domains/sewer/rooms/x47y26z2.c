inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 2 }));
  set_short( "Corridor - x47y26z2" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y26z2.c",
  "south" : DIR+"/rooms/x47y25z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
