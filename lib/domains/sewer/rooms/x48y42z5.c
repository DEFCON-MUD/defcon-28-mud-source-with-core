inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 42, 5 }));
  set_short( "Corridor - x48y42z5" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y42z5.c",
  "east" : DIR+"/rooms/x49y42z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
