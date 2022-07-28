inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 0, 7 }));
  set_short( "Passage - x17y0z7" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y0z7.c",
  "east" : DIR+"/rooms/x18y0z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
