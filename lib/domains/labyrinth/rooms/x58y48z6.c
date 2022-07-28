inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 48, 6 }));
  set_short( "Passage - x58y48z6" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y48z6.c",
  "east" : DIR+"/rooms/x59y48z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
