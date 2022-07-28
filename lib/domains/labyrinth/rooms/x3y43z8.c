inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 43, 8 }));
  set_short( "Passage - x3y43z8" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y44z8.c",
  "south" : DIR+"/rooms/x3y42z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
