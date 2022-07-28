inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 9 }));
  set_short( "Corridor - x11y4z9" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y4z9.c",
  "south" : DIR+"/rooms/x11y3z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
