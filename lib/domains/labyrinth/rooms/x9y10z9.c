inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 10, 9 }));
  set_short( "Corridor - x9y10z9" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y11z9.c",
  "south" : DIR+"/rooms/x9y9z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
