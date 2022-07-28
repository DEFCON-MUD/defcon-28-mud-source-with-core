inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 2, 0 }));
  set_short( "Passage - x48y2z0" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y2z0.c",
  "east" : DIR+"/rooms/x49y2z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
