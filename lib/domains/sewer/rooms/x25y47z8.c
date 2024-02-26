inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 47, 8 }));
  set_short( "Corridor - x25y47z8" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y48z8.c",
  "south" : DIR+"/rooms/x25y46z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
