inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 15, 5 }));
  set_short( "Corridor - x13y15z5" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y16z5.c",
  "south" : DIR+"/rooms/x13y14z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
