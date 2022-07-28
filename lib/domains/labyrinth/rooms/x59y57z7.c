inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 57, 7 }));
  set_short( "Passage - x59y57z7" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y58z7.c",
  "south" : DIR+"/rooms/x59y56z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
