inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 64, 3 }));
  set_short( "Corridor - x47y64z3" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y64z3.c",
  "east" : DIR+"/rooms/x48y64z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
