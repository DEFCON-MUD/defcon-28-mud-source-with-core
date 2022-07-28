inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 0, 6 }));
  set_short( "Hallway - x18y0z6" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y0z6.c",
  "east" : DIR+"/rooms/x19y0z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
