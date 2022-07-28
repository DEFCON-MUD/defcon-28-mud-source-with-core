inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 56, 3 }));
  set_short( "Passage - x56y56z3" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y56z3.c",
  "east" : DIR+"/rooms/x57y56z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
