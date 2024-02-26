inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 24, 5 }));
  set_short( "Passage - x35y24z5" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y24z5.c",
  "north" : DIR+"/rooms/x35y25z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
