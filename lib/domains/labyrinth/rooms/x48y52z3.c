inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 52, 3 }));
  set_short( "Hallway - x48y52z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y52z3.c",
  "east" : DIR+"/rooms/x49y52z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
