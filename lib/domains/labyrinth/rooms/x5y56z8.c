inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 56, 8 }));
  set_short( "Corridor - x5y56z8" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y56z8.c",
  "east" : DIR+"/rooms/x6y56z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
