inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 42, 8 }));
  set_short( "Passage - x7y42z8" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y42z8.c",
  "north" : DIR+"/rooms/x7y43z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
