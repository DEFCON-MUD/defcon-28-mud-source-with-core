inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 56, 9 }));
  set_short( "Passage - x12y56z9" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y56z9.c",
  "east" : DIR+"/rooms/x13y56z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
