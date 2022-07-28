inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 22, 5 }));
  set_short( "Passage - x12y22z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y22z5.c",
  "east" : DIR+"/rooms/x13y22z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
