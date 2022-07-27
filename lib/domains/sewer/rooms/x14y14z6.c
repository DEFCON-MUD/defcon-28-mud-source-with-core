inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 14, 6 }));
  set_short( "Passage - x14y14z6" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y14z6.c",
  "east" : DIR+"/rooms/x15y14z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
