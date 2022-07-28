inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 44, 9 }));
  set_short( "Corridor - x23y44z9" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y44z9.c",
  "south" : DIR+"/rooms/x23y43z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
