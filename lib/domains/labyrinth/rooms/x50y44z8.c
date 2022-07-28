inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 44, 8 }));
  set_short( "Hallway - x50y44z8" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y44z8.c",
  "east" : DIR+"/rooms/x51y44z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
