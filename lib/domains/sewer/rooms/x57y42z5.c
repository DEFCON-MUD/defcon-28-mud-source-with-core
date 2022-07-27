inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 5 }));
  set_short( "Corridor - x57y42z5" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "south" : DIR+"/rooms/x57y41z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
