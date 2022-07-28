inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 45, 4 }));
  set_short( "Corridor - x29y45z4" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y46z4.c",
  "south" : DIR+"/rooms/x29y44z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
