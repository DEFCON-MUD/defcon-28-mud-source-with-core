inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 38, 1 }));
  set_short( "Corridor - x42y38z1" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y38z1.c",
  "east" : DIR+"/rooms/x43y38z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
