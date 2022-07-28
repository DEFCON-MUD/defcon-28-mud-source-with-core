inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 17, 2 }));
  set_short( "Hallway - x5y17z2" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y18z2.c",
  "south" : DIR+"/rooms/x5y16z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
