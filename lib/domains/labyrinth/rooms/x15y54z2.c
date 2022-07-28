inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 54, 2 }));
  set_short( "Corridor - x15y54z2" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y54z2.c",
  "east" : DIR+"/rooms/x16y54z2.c",
  "north" : DIR+"/rooms/x15y55z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
