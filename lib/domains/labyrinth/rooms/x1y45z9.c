inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 45, 9 }));
  set_short( "Hallway - x1y45z9" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y46z9.c",
  "south" : DIR+"/rooms/x1y44z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
