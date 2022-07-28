inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 16, 7 }));
  set_short( "Passage - x29y16z7" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y16z7.c",
  "south" : DIR+"/rooms/x29y15z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
