inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 4 }));
  set_short( "Corridor - x55y54z4" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y54z4.c",
  "east" : DIR+"/rooms/x56y54z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
