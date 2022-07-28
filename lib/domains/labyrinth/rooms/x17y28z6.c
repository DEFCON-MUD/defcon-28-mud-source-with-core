inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 6 }));
  set_short( "Hallway - x17y28z6" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y29z6.c",
  "south" : DIR+"/rooms/x17y27z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
