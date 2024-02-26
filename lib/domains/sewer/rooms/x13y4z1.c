inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 4, 1 }));
  set_short( "Hallway - x13y4z1" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y4z1.c",
  "north" : DIR+"/rooms/x13y5z1.c",
  "south" : DIR+"/rooms/x13y3z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
