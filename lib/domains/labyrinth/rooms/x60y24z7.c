inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 24, 7 }));
  set_short( "Passage - x60y24z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y24z7.c",
  "east" : DIR+"/rooms/x61y24z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
