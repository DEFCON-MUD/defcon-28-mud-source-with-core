inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 1 }));
  set_short( "Hallway - x17y38z1" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y38z1.c",
  "north" : DIR+"/rooms/x17y39z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
