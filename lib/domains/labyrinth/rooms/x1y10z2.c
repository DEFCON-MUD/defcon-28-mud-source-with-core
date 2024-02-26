inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 2 }));
  set_short( "Corridor - x1y10z2" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y10z2.c",
  "north" : DIR+"/rooms/x1y11z2.c",
  "south" : DIR+"/rooms/x1y9z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
