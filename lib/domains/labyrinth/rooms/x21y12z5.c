inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 5 }));
  set_short( "Passage - x21y12z5" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y12z5.c",
  "east" : DIR+"/rooms/x22y12z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
