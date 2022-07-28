inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 2 }));
  set_short( "Hallway - x44y0z2" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z2.c",
  "east" : DIR+"/rooms/x45y0z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
