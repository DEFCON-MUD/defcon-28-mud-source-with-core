inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 8 }));
  set_short( "Corridor - x43y2z8" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y2z8.c",
  "east" : DIR+"/rooms/x44y2z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
