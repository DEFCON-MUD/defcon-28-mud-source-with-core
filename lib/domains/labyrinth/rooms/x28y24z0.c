inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 24, 0 }));
  set_short( "Passage - x28y24z0" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y24z0.c",
  "east" : DIR+"/rooms/x29y24z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
