inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 3 }));
  set_short( "Corridor - x23y22z3" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y22z3.c",
  "east" : DIR+"/rooms/x24y22z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
