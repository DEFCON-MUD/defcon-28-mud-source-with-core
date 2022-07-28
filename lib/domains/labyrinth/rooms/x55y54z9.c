inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 9 }));
  set_short( "Corridor - x55y54z9" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y54z9.c",
  "south" : DIR+"/rooms/x55y53z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
