inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 40, 8 }));
  set_short( "Corridor - x34y40z8" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y40z8.c",
  "east" : DIR+"/rooms/x35y40z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
