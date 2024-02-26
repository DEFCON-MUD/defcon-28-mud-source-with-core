inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 12, 2 }));
  set_short( "Passage - x15y12z2" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y12z2.c",
  "south" : DIR+"/rooms/x15y11z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
