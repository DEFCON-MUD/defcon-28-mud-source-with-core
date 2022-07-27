inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 64, 5 }));
  set_short( "Corridor - x22y64z5" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y64z5.c",
  "east" : DIR+"/rooms/x23y64z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
