inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 64, 7 }));
  set_short( "Passage - x34y64z7" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y64z7.c",
  "east" : DIR+"/rooms/x35y64z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
