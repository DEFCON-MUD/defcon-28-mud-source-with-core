inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 2 }));
  set_short( "Corridor - x23y48z2" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y48z2.c",
  "north" : DIR+"/rooms/x23y49z2.c",
  "south" : DIR+"/rooms/x23y47z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
