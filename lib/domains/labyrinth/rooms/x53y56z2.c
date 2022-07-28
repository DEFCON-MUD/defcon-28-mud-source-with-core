inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 2 }));
  set_short( "Passage - x53y56z2" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y56z2.c",
  "south" : DIR+"/rooms/x53y55z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
