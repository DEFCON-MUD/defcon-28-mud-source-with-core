inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 5 }));
  set_short( "Hallway - x35y36z5" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y36z5.c",
  "north" : DIR+"/rooms/x35y37z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
