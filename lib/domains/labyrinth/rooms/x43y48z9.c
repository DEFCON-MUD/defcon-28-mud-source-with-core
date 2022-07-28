inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 48, 9 }));
  set_short( "Corridor - x43y48z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y48z9.c",
  "east" : DIR+"/rooms/x44y48z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
