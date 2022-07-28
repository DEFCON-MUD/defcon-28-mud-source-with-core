inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 31, 5 }));
  set_short( "Passage - x11y31z5" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y32z5.c",
  "south" : DIR+"/rooms/x11y30z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
