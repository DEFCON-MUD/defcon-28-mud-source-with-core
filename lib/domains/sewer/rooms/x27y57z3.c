inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 57, 3 }));
  set_short( "Corridor - x27y57z3" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y58z3.c",
  "south" : DIR+"/rooms/x27y56z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
