inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 4 }));
  set_short( "Corridor - x1y24z4" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y24z4.c",
  "north" : DIR+"/rooms/x1y25z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
