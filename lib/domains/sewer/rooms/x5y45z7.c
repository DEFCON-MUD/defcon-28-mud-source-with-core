inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 45, 7 }));
  set_short( "Hallway - x5y45z7" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y46z7.c",
  "south" : DIR+"/rooms/x5y44z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
