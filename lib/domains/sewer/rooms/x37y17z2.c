inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 2 }));
  set_short( "Corridor - x37y17z2" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z2.c",
  "south" : DIR+"/rooms/x37y16z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
