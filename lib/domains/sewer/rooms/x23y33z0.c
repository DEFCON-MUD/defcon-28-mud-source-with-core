inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 0 }));
  set_short( "Corridor - x23y33z0" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z0.c",
  "south" : DIR+"/rooms/x23y32z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
