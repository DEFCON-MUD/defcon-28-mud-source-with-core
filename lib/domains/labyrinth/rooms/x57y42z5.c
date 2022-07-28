inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 5 }));
  set_short( "Passage - x57y42z5" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "south" : DIR+"/rooms/x57y41z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
