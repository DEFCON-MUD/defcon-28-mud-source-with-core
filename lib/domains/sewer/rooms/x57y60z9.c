inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 60, 9 }));
  set_short( "Passage - x57y60z9" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y60z9.c",
  "east" : DIR+"/rooms/x58y60z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
