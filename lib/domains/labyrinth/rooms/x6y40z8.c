inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 40, 8 }));
  set_short( "Hallway - x6y40z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y40z8.c",
  "east" : DIR+"/rooms/x7y40z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
