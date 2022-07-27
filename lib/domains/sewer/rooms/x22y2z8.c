inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 2, 8 }));
  set_short( "Corridor - x22y2z8" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y2z8.c",
  "east" : DIR+"/rooms/x23y2z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
