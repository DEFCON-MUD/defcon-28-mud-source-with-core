inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 1 }));
  set_short( "Corridor - x9y56z1" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y57z1.c",
  "south" : DIR+"/rooms/x9y55z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
