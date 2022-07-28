inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 31, 7 }));
  set_short( "Passage - x21y31z7" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y32z7.c",
  "south" : DIR+"/rooms/x21y30z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
