inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 5 }));
  set_short( "Passage - x1y24z5" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y24z5.c",
  "north" : DIR+"/rooms/x1y25z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
