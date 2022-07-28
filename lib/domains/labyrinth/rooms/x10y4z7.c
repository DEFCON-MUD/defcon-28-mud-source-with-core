inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 4, 7 }));
  set_short( "Passage - x10y4z7" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y4z7.c",
  "east" : DIR+"/rooms/x11y4z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
