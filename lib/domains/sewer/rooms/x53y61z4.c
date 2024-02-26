inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 61, 4 }));
  set_short( "Hallway - x53y61z4" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y62z4.c",
  "south" : DIR+"/rooms/x53y60z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
