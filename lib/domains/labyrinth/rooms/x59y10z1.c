inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 10, 1 }));
  set_short( "Passage - x59y10z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y10z1.c",
  "east" : DIR+"/rooms/x60y10z1.c",
  "north" : DIR+"/rooms/x59y11z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
