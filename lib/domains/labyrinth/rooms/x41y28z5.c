inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 5 }));
  set_short( "Passage - x41y28z5" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y28z5.c",
  "south" : DIR+"/rooms/x41y27z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
