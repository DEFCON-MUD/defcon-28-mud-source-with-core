inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 50, 8 }));
  set_short( "Hallway - x5y50z8" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y50z8.c",
  "east" : DIR+"/rooms/x6y50z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
