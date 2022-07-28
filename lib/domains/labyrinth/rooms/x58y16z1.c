inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 16, 1 }));
  set_short( "Corridor - x58y16z1" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y16z1.c",
  "east" : DIR+"/rooms/x59y16z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
