inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 48, 4 }));
  set_short( "Hallway - x30y48z4" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y48z4.c",
  "east" : DIR+"/rooms/x31y48z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
