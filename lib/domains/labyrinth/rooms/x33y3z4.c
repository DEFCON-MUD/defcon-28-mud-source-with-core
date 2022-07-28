inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 3, 4 }));
  set_short( "Passage - x33y3z4" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y4z4.c",
  "south" : DIR+"/rooms/x33y2z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
