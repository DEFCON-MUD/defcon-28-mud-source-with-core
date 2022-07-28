inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 38, 7 }));
  set_short( "Corridor - x61y38z7" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y38z7.c",
  "north" : DIR+"/rooms/x61y39z7.c",
  "south" : DIR+"/rooms/x61y37z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
