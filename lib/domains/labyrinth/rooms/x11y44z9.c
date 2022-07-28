inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 44, 9 }));
  set_short( "Hallway - x11y44z9" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y45z9.c",
  "south" : DIR+"/rooms/x11y43z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
