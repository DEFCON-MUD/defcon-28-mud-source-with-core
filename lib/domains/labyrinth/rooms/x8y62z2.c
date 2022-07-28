inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 62, 2 }));
  set_short( "Passage - x8y62z2" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y62z2.c",
  "east" : DIR+"/rooms/x9y62z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
