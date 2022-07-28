inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 2 }));
  set_short( "Passage - x59y6z2" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y6z2.c",
  "north" : DIR+"/rooms/x59y7z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
