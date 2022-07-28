inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 16, 9 }));
  set_short( "Hallway - x8y16z9" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y16z9.c",
  "east" : DIR+"/rooms/x9y16z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
