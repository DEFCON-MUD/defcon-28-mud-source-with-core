inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 36, 9 }));
  set_short( "Passage - x12y36z9" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y36z9.c",
  "east" : DIR+"/rooms/x13y36z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
