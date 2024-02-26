inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 1 }));
  set_short( "Corridor - x5y6z1" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y6z1.c",
  "east" : DIR+"/rooms/x6y6z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
