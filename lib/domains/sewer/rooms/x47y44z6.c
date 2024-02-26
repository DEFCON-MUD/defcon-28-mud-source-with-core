inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 6 }));
  set_short( "Corridor - x47y44z6" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y44z6.c",
  "south" : DIR+"/rooms/x47y43z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
