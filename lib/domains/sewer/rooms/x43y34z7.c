inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 34, 7 }));
  set_short( "Hallway - x43y34z7" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y34z7.c",
  "north" : DIR+"/rooms/x43y35z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
