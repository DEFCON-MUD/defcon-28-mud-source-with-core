inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 53, 6 }));
  set_short( "Hallway - x9y53z6" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y54z6.c",
  "south" : DIR+"/rooms/x9y52z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
