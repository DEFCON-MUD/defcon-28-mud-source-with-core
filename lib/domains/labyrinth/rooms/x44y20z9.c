inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 20, 9 }));
  set_short( "Passage - x44y20z9" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y20z9.c",
  "east" : DIR+"/rooms/x45y20z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
