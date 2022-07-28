inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 8 }));
  set_short( "Passage - x9y56z8" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y56z8.c",
  "east" : DIR+"/rooms/x10y56z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
