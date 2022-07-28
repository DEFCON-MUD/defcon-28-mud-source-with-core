inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 38, 3 }));
  set_short( "Passage - x52y38z3" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y38z3.c",
  "east" : DIR+"/rooms/x53y38z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
