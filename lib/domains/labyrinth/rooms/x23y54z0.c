inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 54, 0 }));
  set_short( "Passage - x23y54z0" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y54z0.c",
  "east" : DIR+"/rooms/x24y54z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
