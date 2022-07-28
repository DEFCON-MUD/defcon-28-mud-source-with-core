inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 60, 9 }));
  set_short( "Hallway - x37y60z9" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y60z9.c",
  "south" : DIR+"/rooms/x37y59z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
