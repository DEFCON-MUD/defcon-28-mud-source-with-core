inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 32, 7 }));
  set_short( "Corridor - x53y32z7" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y32z7.c",
  "east" : DIR+"/rooms/x54y32z7.c",
  "north" : DIR+"/rooms/x53y33z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
