inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 30, 3 }));
  set_short( "Hallway - x58y30z3" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y30z3.c",
  "east" : DIR+"/rooms/x59y30z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
