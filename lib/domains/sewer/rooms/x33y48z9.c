inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 9 }));
  set_short( "Passage - x33y48z9" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y48z9.c",
  "north" : DIR+"/rooms/x33y49z9.c",
  "south" : DIR+"/rooms/x33y47z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
