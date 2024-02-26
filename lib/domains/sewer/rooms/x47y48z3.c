inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 3 }));
  set_short( "Corridor - x47y48z3" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y48z3.c",
  "north" : DIR+"/rooms/x47y49z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
