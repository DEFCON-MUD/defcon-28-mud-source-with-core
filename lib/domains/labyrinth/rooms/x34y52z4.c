inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 52, 4 }));
  set_short( "Passage - x34y52z4" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y52z4.c",
  "east" : DIR+"/rooms/x35y52z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
