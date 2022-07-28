inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 50, 6 }));
  set_short( "Hallway - x8y50z6" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y50z6.c",
  "east" : DIR+"/rooms/x9y50z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
