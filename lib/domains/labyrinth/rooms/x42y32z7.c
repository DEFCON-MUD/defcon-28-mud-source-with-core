inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 32, 7 }));
  set_short( "Passage - x42y32z7" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y32z7.c",
  "east" : DIR+"/rooms/x43y32z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
