inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 61, 6 }));
  set_short( "Corridor - x17y61z6" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y62z6.c",
  "south" : DIR+"/rooms/x17y60z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
