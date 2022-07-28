inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 32, 4 }));
  set_short( "Corridor - x52y32z4" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y32z4.c",
  "east" : DIR+"/rooms/x53y32z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
