inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 36, 4 }));
  set_short( "Hallway - x29y36z4" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y36z4.c",
  "north" : DIR+"/rooms/x29y37z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
