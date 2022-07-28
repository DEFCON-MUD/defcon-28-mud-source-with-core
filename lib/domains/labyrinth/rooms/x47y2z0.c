inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 2, 0 }));
  set_short( "Passage - x47y2z0" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y2z0.c",
  "north" : DIR+"/rooms/x47y3z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
