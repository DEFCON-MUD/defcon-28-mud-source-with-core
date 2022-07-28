inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 33, 6 }));
  set_short( "Corridor - x41y33z6" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y34z6.c",
  "south" : DIR+"/rooms/x41y32z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
