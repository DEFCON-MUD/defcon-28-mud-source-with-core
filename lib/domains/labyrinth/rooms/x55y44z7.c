inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 44, 7 }));
  set_short( "Passage - x55y44z7" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y44z7.c",
  "east" : DIR+"/rooms/x56y44z7.c",
  "north" : DIR+"/rooms/x55y45z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
