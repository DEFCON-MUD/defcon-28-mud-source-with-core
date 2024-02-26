inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 7 }));
  set_short( "Hallway - x5y62z7" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y62z7.c",
  "south" : DIR+"/rooms/x5y61z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
