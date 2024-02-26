inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 13, 4 }));
  set_short( "Hallway - x25y13z4" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y14z4.c",
  "south" : DIR+"/rooms/x25y12z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
