inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 56, 2 }));
  set_short( "Corridor - x32y56z2" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y56z2.c",
  "east" : DIR+"/rooms/x33y56z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
