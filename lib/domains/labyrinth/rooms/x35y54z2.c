inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 2 }));
  set_short( "Passage - x35y54z2" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y54z2.c",
  "south" : DIR+"/rooms/x35y53z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
