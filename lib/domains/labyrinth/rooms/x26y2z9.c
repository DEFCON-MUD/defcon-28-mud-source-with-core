inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 2, 9 }));
  set_short( "Corridor - x26y2z9" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y2z9.c",
  "east" : DIR+"/rooms/x27y2z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
