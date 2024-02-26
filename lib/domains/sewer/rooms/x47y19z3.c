inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 19, 3 }));
  set_short( "Corridor - x47y19z3" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y20z3.c",
  "south" : DIR+"/rooms/x47y18z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
