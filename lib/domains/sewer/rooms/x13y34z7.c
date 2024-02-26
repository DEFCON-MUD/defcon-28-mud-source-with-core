inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 7 }));
  set_short( "Passage - x13y34z7" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y35z7.c",
  "south" : DIR+"/rooms/x13y33z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
