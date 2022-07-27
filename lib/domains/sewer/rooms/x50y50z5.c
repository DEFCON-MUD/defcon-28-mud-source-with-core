inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 50, 5 }));
  set_short( "Passage - x50y50z5" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y50z5.c",
  "east" : DIR+"/rooms/x51y50z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
