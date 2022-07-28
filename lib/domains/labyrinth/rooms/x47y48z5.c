inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 5 }));
  set_short( "Passage - x47y48z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y48z5.c",
  "south" : DIR+"/rooms/x47y47z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
