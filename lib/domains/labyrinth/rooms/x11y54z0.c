inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 54, 0 }));
  set_short( "Hallway - x11y54z0" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y55z0.c",
  "south" : DIR+"/rooms/x11y53z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
