inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 22, 9 }));
  set_short( "Hallway - x10y22z9" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y22z9.c",
  "east" : DIR+"/rooms/x11y22z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
