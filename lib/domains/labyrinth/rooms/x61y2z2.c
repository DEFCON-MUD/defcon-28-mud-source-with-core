inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 2 }));
  set_short( "Passage - x61y2z2" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z2.c",
  "north" : DIR+"/rooms/x61y3z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
