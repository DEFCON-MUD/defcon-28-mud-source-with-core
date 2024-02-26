inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 2 }));
  set_short( "Corridor - x49y8z2" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y8z2.c",
  "north" : DIR+"/rooms/x49y9z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
