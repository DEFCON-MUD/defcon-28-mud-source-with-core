inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 44, 6 }));
  set_short( "Hallway - x50y44z6" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y44z6.c",
  "east" : DIR+"/rooms/x51y44z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
