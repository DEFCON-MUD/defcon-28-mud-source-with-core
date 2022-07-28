inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 6 }));
  set_short( "Passage - x19y58z6" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y58z6.c",
  "north" : DIR+"/rooms/x19y59z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
