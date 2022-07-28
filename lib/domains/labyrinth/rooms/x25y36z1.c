inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 36, 1 }));
  set_short( "Hallway - x25y36z1" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y36z1.c",
  "north" : DIR+"/rooms/x25y37z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
