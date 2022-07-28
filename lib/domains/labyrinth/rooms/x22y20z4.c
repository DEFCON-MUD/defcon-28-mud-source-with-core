inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 20, 4 }));
  set_short( "Passage - x22y20z4" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y20z4.c",
  "east" : DIR+"/rooms/x23y20z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
