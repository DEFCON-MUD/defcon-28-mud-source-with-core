inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 42, 7 }));
  set_short( "Corridor - x31y42z7" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y42z7.c",
  "north" : DIR+"/rooms/x31y43z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
