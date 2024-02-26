inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 7, 1 }));
  set_short( "Passage - x51y7z1" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y8z1.c",
  "south" : DIR+"/rooms/x51y6z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
