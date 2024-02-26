inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 57, 1 }));
  set_short( "Corridor - x61y57z1" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y58z1.c",
  "south" : DIR+"/rooms/x61y56z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
