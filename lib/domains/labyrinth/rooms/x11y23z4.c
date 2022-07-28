inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 23, 4 }));
  set_short( "Passage - x11y23z4" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y24z4.c",
  "south" : DIR+"/rooms/x11y22z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
