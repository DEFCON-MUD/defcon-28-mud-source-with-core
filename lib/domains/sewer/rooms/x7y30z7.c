inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 30, 7 }));
  set_short( "Passage - x7y30z7" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y30z7.c",
  "north" : DIR+"/rooms/x7y31z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
