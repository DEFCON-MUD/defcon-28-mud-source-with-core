inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 17, 3 }));
  set_short( "Passage - x31y17z3" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y18z3.c",
  "south" : DIR+"/rooms/x31y16z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
