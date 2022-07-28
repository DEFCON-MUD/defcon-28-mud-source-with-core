inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 45, 4 }));
  set_short( "Hallway - x55y45z4" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y46z4.c",
  "south" : DIR+"/rooms/x55y44z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
