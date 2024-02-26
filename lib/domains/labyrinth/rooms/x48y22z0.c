inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 22, 0 }));
  set_short( "Passage - x48y22z0" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y22z0.c",
  "east" : DIR+"/rooms/x49y22z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
