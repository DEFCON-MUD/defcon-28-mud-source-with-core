inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 0, 2 }));
  set_short( "Passage - x12y0z2" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y0z2.c",
  "east" : DIR+"/rooms/x13y0z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
