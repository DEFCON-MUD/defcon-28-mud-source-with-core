inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 2 }));
  set_short( "Passage - x19y32z2" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y32z2.c",
  "east" : DIR+"/rooms/x20y32z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
