inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 60, 1 }));
  set_short( "Corridor - x17y60z1" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y60z1.c",
  "north" : DIR+"/rooms/x17y61z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
