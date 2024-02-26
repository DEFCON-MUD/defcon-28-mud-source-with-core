inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 12, 6 }));
  set_short( "Corridor - x24y12z6" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y12z6.c",
  "east" : DIR+"/rooms/x25y12z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
