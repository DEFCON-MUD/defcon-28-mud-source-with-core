inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 20, 7 }));
  set_short( "Corridor - x2y20z7" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y20z7.c",
  "east" : DIR+"/rooms/x3y20z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
