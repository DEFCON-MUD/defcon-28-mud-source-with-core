inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 8, 5 }));
  set_short( "Passage - x56y8z5" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y8z5.c",
  "east" : DIR+"/rooms/x57y8z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
