inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 40, 9 }));
  set_short( "Passage - x12y40z9" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y40z9.c",
  "east" : DIR+"/rooms/x13y40z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
