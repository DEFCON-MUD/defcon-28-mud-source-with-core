inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 18, 4 }));
  set_short( "Corridor - x13y18z4" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y18z4.c",
  "north" : DIR+"/rooms/x13y19z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
