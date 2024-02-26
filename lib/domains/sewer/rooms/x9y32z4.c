inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 32, 4 }));
  set_short( "Hallway - x9y32z4" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y33z4.c",
  "south" : DIR+"/rooms/x9y31z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
