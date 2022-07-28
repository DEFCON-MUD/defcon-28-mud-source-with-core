inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 46, 8 }));
  set_short( "Hallway - x22y46z8" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y46z8.c",
  "east" : DIR+"/rooms/x23y46z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
