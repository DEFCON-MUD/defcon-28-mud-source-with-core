inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 4 }));
  set_short( "Corridor - x25y46z4" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y46z4.c",
  "south" : DIR+"/rooms/x25y45z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
