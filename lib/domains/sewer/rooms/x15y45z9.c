inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 45, 9 }));
  set_short( "Corridor - x15y45z9" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y46z9.c",
  "south" : DIR+"/rooms/x15y44z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
