inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 18, 7 }));
  set_short( "Corridor - x18y18z7" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y18z7.c",
  "east" : DIR+"/rooms/x19y18z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
