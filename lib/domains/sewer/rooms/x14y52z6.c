inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 52, 6 }));
  set_short( "Passage - x14y52z6" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y52z6.c",
  "east" : DIR+"/rooms/x15y52z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
