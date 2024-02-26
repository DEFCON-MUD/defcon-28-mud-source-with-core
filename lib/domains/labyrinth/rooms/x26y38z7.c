inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 38, 7 }));
  set_short( "Passage - x26y38z7" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y38z7.c",
  "east" : DIR+"/rooms/x27y38z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
