inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 8, 8 }));
  set_short( "Passage - x13y8z8" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y8z8.c",
  "south" : DIR+"/rooms/x13y7z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
