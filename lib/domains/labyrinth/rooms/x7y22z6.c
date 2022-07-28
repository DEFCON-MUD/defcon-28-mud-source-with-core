inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 22, 6 }));
  set_short( "Corridor - x7y22z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y22z6.c",
  "east" : DIR+"/rooms/x8y22z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
