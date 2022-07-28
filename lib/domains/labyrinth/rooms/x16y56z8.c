inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 56, 8 }));
  set_short( "Passage - x16y56z8" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y56z8.c",
  "east" : DIR+"/rooms/x17y56z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
