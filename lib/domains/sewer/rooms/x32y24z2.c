inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 24, 2 }));
  set_short( "Hallway - x32y24z2" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y24z2.c",
  "east" : DIR+"/rooms/x33y24z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
