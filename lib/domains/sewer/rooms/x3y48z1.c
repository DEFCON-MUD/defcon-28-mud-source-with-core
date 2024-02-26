inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 1 }));
  set_short( "Corridor - x3y48z1" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y48z1.c",
  "south" : DIR+"/rooms/x3y47z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
