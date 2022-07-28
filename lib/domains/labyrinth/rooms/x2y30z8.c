inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 30, 8 }));
  set_short( "Hallway - x2y30z8" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y30z8.c",
  "east" : DIR+"/rooms/x3y30z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
